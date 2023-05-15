#include <bits/stdc++.h>
#include <cmath>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


void reflectSquare(vector<vector<int>>& s) {
    for (int i = 0; i < 3; i++) {
        swap(s[i][0], s[i][2]);
    }
}

void rot(int& a, int &b, int &c, int &d) {
    int tmp = a;
    a = b; b = c; c = d; d = tmp;
}

void turnSquare(vector<vector<int>>& s) {
    rot(s[0][0], s[0][2], s[2][2], s[2][0]);
    rot(s[0][1], s[1][2], s[2][1], s[1][0]);
}

int diff(const vector<vector<int>>& s1, const vector<vector<int>>& s2) {
    int result = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result += abs(s1[i][j] - s2[i][j]);
        }
        cout << endl;
    }
    return result;
}

/*
 * Complete the 'formingMagicSquare' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY s as parameter.
 */

int formingMagicSquare(vector<vector<int>> s) {
    int result = 100000;
    vector<vector<int>> magic = {{8,1,6},{3,5,7},{4,9,2}};

    for (int r = 0; r < 2; r++) {
        for (int t = 0; t < 4; t++) {
            result = min(result, diff(s, magic));
            turnSquare(magic);
        }
        reflectSquare(magic);
    }
    
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);

    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        string s_row_temp_temp;
        getline(cin, s_row_temp_temp);

        vector<string> s_row_temp = split(rtrim(s_row_temp_temp));

        for (int j = 0; j < 3; j++) {
            int s_row_item = stoi(s_row_temp[j]);

            s[i][j] = s_row_item;
        }
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
