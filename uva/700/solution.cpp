#include <iostream>
#include <set>
#include <sstream>


using namespace std;

struct CompDate {
    int y, a, b;
    CompDate(int y_val, int a_val, int b_val) : y(y_val), a(a_val), b(b_val) {}
    
    int interval() const {
        return b - a;
    }

    bool operator<(const CompDate& rhs) const {
        if(interval() < rhs.interval()) return false;
        if(interval() > rhs.interval()) return true;
        if(y < rhs.y) return false;
        if(y > rhs.y) return true;
        if(a < rhs.a) return false;
        if(a > rhs.a) return true;
        if(b < rhs.b) return false;
        if(b > rhs.b) return true;
        return false;
    }
    
    bool check(int year) const {
        return (year >= a) && ((year - a) % interval() == (y - a) % interval());
    }

    friend ostream& operator<<(ostream& os, const CompDate& dt);
};

ostream& operator<<(ostream& os, const CompDate& cd)
{
    os << "[" << cd.a << ".." << cd.b << "](" << cd.y << ")";
    return os;
}


int main() {
    ios::sync_with_stdio(false);

    for(int t = 1;; t++) {
        int n;
        cin >> n;
        if(n == 0) break;
        
        set<CompDate> comp_dates;
        
        for(int i = 0; i < n; i++) {
            int y, a, b;
            cin >> y >> a >> b;
            comp_dates.insert(CompDate(y, a, b));
        }
        
        CompDate first = *comp_dates.begin();
        bool solved = false;
        int y;
        
        //cout << "FIRST " << first << endl;
        
        for(y = first.y; y < 10000; y += first.b - first.a) {
            solved = true;

            for(set<CompDate>::iterator it = comp_dates.begin(); it != comp_dates.end(); it++) {
                if(!it->check(y)) {
                    solved = false;
                    break;
                }
            }
            if(solved) break;
        }
        cout << "Case #" << t << ":" << endl;
        if(solved) {
            cout << "The actual year is " <<  y << "." << endl;
        } else {
            cout << "Unknown bugs detected." << endl;
        }
        
        cout << endl;
        
    }    
    
    return 0;
}