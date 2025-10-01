#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int n, m;
	cin >> n >> m;
	vector<int> row_sum(n);
	vector<int> row_questions(n);
	vector<int> col_sum(m);
	vector<int> col_questions(m);
	vector<string> rows(n);
	for (int i = 0; i < n; i++) {
		cin >> rows[i];
		for(int j = 0; j < m; j++) {
			char c = rows[i][j];
			if 			(c == '+') { row_sum[i]++; col_sum[j]++; }
			else if (c == '-') { row_sum[i]--; col_sum[j]--; }
			else if (c == '?') { row_questions[i]++; col_questions[j]++; };
		}
	}

	int result =  std::numeric_limits<int>::min();
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			char c = rows[i][j];
			int r = row_sum[i] + row_questions[i] - col_sum[j] + col_questions[j] - (c == '?' ? 2 : 0);
			result = max(result, r);
		}
  }

	cout << result << endl;

	return 0;
}

