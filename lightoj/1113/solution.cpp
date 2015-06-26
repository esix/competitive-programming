#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cout.precision(9);

  int T;
  cin >> T;

  string command; getline(cin, command);

  for(int t = 1; t <= T; t++) {
    cout << "Case " << t << ":" << endl;
    vector<string> urls;
    urls.push_back("http://www.lightoj.com/");
    int pos = 0;

    for(; (getline(cin, command)), command != "QUIT";) {

      if(command.substr(0, 5) == "VISIT") {
        string url = command.substr(6);
        urls.resize(pos+1);
        urls.push_back(url);
        pos = urls.size() - 1;
        cout << urls[pos] << endl;

      } else if(command == "BACK") {
        if(pos > 0) {
          pos --;
          cout << urls[pos] << endl;
        } else {
          cout << "Ignored\n";
        }

      } else if(command == "FORWARD") {
        if(pos < urls.size() - 1) {
          pos ++;
          cout << urls[pos] << endl;
        } else {
          cout << "Ignored\n";
        }

      } else {
        cerr << "Unknown command " << command << endl;
      }


      /*cout << "Stack: ";
      for(int i = 0; i < urls.size(); i++) {
        if(pos == i) cout << ">";
        cout << urls[i];
        if(pos == i) cout << "<";
        cout << " ";
      }
      cout << "\n";*/
    }
  }

  return 0;
}
