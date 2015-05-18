#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>


using namespace std;

int HaabMonthToNumber(const string& m) {
    if     (m == "pop"   ) return 0;
    else if(m == "no"    ) return 1;
    else if(m == "zip"   ) return 2;
    else if(m == "zotz"  ) return 3;
    else if(m == "tzec"  ) return 4;
    else if(m == "xul"   ) return 5;
    else if(m == "yoxkin") return 6;
    else if(m == "mol"   ) return 7;
    else if(m == "chen"  ) return 8;
    else if(m == "yax"   ) return 9;
    else if(m == "zac"   ) return 10;
    else if(m == "ceh"   ) return 11;
    else if(m == "mac"   ) return 12;
    else if(m == "kankin") return 13;
    else if(m == "muan"  ) return 14;
    else if(m == "pax"   ) return 15;
    else if(m == "koyab" ) return 16;
    else if(m == "cumhu" ) return 17;
    else if(m == "uayet" ) return 18;
    else return -1;
}

string TzolkinNumberToName(int number) {
    switch(number) {
        case 0: return "imix";
        case 1: return "ik";
        case 2: return "akbal";
        case 3: return "kan";
        case 4: return "chicchan";
        case 5: return "cimi";
        case 6: return "manik";
        case 7: return "lamat";
        case 8: return "muluk";
        case 9: return "ok";
        case 10: return "chuen";
        case 11: return "eb";
        case 12: return "ben";
        case 13: return "ix";
        case 14: return "mem";
        case 15: return "cib";
        case 16: return "caban";
        case 17: return "eznab";
        case 18: return "canac";
        case 19: return "ahau";
    }
}


struct Haab {
    Haab(string s) {
        string s_day, s_month, s_year;
        
        int state = 0;
        for(int i = 0; i < s.length(); i++) {
            char c = s[i];
            switch(state) {
                case 0:
                    if('0' <= c && c <= '9') s_day += c;
                    else if(c == '.') state = 1;
                    else state = -1;
                    break;
                
                case 1:
                    if(c == ' ') state = 2;
                    else state = -1;
                    break;
                    
                case 2:
                    if('a' <= c && c <= 'z') s_month += c;
                    else if(c == ' ') state = 3;
                    else state = -1;
                    break;
                    
                case 3:
                    if('0' <= c && c <= '9') s_year += c;
                    else state = -1;
                    break;
            }
        }
        m_day = atoi(s_day.c_str());
        m_month = HaabMonthToNumber(s_month);
        m_year = atoi(s_year.c_str());
    }
    
    
    int getOrderNumber() const {
        return m_year * 365 + m_month * 20 + m_day;
    }
    
    int m_day, m_month, m_year;
};


struct Tzolkin {
    Tzolkin(int order) {
        m_year = order / 260;
        order %= 260;
        m_name = order % 20;
        m_number = order % 13;
    }
    int m_number;
    int m_name;
    int m_year;
    
    string toString() const {
        stringstream ss;
        ss << m_number+1 << " " << TzolkinNumberToName(m_name) << " " << m_year;
        return ss.str();
    }
};



int main() {
    int N;
    string s;
    
    cin >> N;
    cout << N << endl;
    getline(cin, s);

    for(int i = 0; i < N; i++) {
        getline(cin, s);
        Haab h(s);
        Tzolkin t(h.getOrderNumber());
        cout << t.toString() << endl;
    }
    
    
    return 0;
}