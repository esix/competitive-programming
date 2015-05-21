#include <iostream>
#include <map>
#include <set>

using namespace std;

string set_to_string(const set<char>& c) {
    string result = "";
    for(set<char>::const_iterator it = c.begin(); it != c.end(); it++) {
        result += *it;
    }
    return result;
}



int main() {
    string s, prev = "";
    cin >>  s;
    
    typedef map<char, set<char> > greater_t;
    typedef greater_t::iterator greater_iterator_t;
    greater_t greater;
    greater_iterator_t na = greater.end();

    while(s != "#") {
        
        for(int i = 0; i < s.length(); i++) {               // add all letters to map
            greater_iterator_t it = greater.find(s[i]);
            if(it == na) greater[s[i]] = set<char>();
        }
        
        if(prev != "") {
            int min_len = min(prev.length(), s.length()), i;
            
            for(i = 0; i < min_len; i++) {
                if(s[i] != prev[i]) break;
            }
            
            if(i == min_len) {
                // AAAAA
                // AAAAABBBBB
            } else {
                // RULE: prev[i] < s[i]
                greater[s[i]].insert(prev[i]);
                //cout << prev << " < " << s << " => " << prev[i] << " < " << s[i] << endl;
            }
            
        } 
        prev = s;
        cin >>  s;
    }
    
    std::string result;
    
    while(!greater.empty()) {
        
        greater_iterator_t it = greater.begin();
        for(; it != na; it++) {
            if(it->second.empty()) break;
        }
        if(it == na) {
            break;
        }
        char c = it->first;
        result += c;
        greater.erase(it);
        
        
        for(it = greater.begin(); it != na; it++) {
            it->second.erase(c);
        }
    }
    
    cout << result << endl;   
    
    
    
    return 0;
}
