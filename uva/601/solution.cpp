#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <sstream>
#include <cmath>

using namespace std;


typedef pair<int, int> position_t;
typedef set<position_t> positionset_t;


class Group {
public:
    void add(int row, int col) {
        m_elements.insert(make_pair(row, col));
    }
    
    void add(const positionset_t& ps) {
        for(positionset_t::iterator it = ps.begin(); it != ps.end(); ++it)
            m_elements.insert(*it);
    }

    
    bool has(int row, int col) const {
        positionset_t::const_iterator it = m_elements.find(make_pair(row, col));
        return it != m_elements.end();
    }
    
    bool has_row(int row) const {
        for(positionset_t::const_iterator it = m_elements.begin(); it != m_elements.end(); ++it) {
            if(it->first == row)
                return true;
        }
        return false;
    }
    
    bool has_col(int col) const {
        for(positionset_t::const_iterator it = m_elements.begin(); it != m_elements.end(); ++it) {
            if(it->second == col)
                return true;
        }
        return false;
    }

    string toString() const {
        stringstream ss;
        for(positionset_t::const_iterator it = m_elements.begin(); it != m_elements.end(); ++it) {
            ss << "(" << it->first << "," << it->second << ")";
        }
        return ss.str();
    }
    
    void pretty_print(int n) const {
        for(int row = 0; row < n; row ++) {
            string s;
            for(int col = 0; col < n; col ++)
                if(has(row, col))
                    s += "@";
                else
                    s += ".";
            cout << s << endl;
        }
    }
    
    positionset_t collect_adjacents(const vector<string>& board, int n, char color) const {
        positionset_t result;

        for(positionset_t::const_iterator it = m_elements.begin(); it != m_elements.end(); ++it) {
            int row = it->first, col = it->second;
            if(row-1 >= 0 && !has(row-1, col) && board[row-1][col] == color) result.insert(make_pair(row-1, col));
            if(col-1 >= 0 && !has(row, col-1) && board[row][col-1] == color) result.insert(make_pair(row, col-1));
            if(row+1 <  n && !has(row+1, col) && board[row+1][col] == color) result.insert(make_pair(row+1, col));
            if(col+1 <  n && !has(row, col+1) && board[row][col+1] == color) result.insert(make_pair(row, col+1));
        }
        return result;
    }

private:
    positionset_t m_elements;
};



class Analyser {
public:
    Analyser(const vector<string>& board, int n) : m_n(n), m_board(board)
    {
    };
    
    Group build_group(int row, int col) const {
        Group result;
        
        char color = m_board[row][col];

        positionset_t pending;
        pending.insert(make_pair(row, col));
        
        while(!pending.empty()) {
            result.add(pending);
            pending = result.collect_adjacents(m_board, m_n, color);
        }
        
        return result;
    }
    

    bool is_white_winner() const {
        int row = 0, col = 0;
        for(row = 0; row < m_n; row++) {     // left side
            if(m_board[row][col] == 'W') {
                Group g = build_group(row, col);
                if(g.has_col(m_n-1))
                    return true;
            }
        }
        return false;
    }
    
    bool is_black_winner() const {
        int row = 0, col = 0;
        for(col = 0; col < m_n; col++) {     // top side
            if(m_board[row][col] == 'B') {
                Group g = build_group(row, col);
                if(g.has_row(m_n-1))
                    return true;
            }
        }
        return false;
    }
    
    bool is_white_can_win() const {
        int row = 0, col = (m_n-1) * 2;
        
        while(col) {
            col -= m_n-1;
        
            for(row = 0; row < m_n; row++) {     // left/right side
                if(m_board[row][col] == 'W') {
                    Group g = build_group(row, col);
                
                    g.add(g.collect_adjacents(m_board, m_n, 'U'));         // extend on empty

                    positionset_t pending = g.collect_adjacents(m_board, m_n, 'W');
                    while(!pending.empty()) {
                        g.add(pending);
                        pending = g.collect_adjacents(m_board, m_n, 'W');
                    }

                    if(g.has_col(0) && g.has_col(m_n-1))
                        return true;
                }
            }
        }

        return false;
    }
    
    bool is_black_can_win() const {
        int row = (m_n-1) * 2, col = 0;
        
        while(row) {
            row -= m_n-1;
        
            for(col = 0; col < m_n; col++) {     // top/bottom side
                if(m_board[row][col] == 'B') {
                    
                    Group g = build_group(row, col);
                    
                
                    g.add(g.collect_adjacents(m_board, m_n, 'U'));         // extend on empty
                    

                    positionset_t pending = g.collect_adjacents(m_board, m_n, 'B');
                    while(!pending.empty()) {
                        g.add(pending);
                        pending = g.collect_adjacents(m_board, m_n, 'B');
                    }

                    if(g.has_row(0) && g.has_row(m_n-1))
                        return true;
                }
            }
        }

        return false;
    }
    
private:
    int m_n;
    vector<string> m_board;
};


int main() {
    ios::sync_with_stdio(false);
    
    int n;
    while(true) {
        cin >> n;
        if(n == 0) break;
        
        vector<string> board;
        
        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            board.push_back(s);
        }
        
        Analyser analyser(board, n);
        
        if(analyser.is_white_winner())
            cout << "White has a winning path." << endl;
        else if(analyser.is_black_winner()) {
            cout << "Black has a winning path." << endl;
        } else if(analyser.is_white_can_win()) {
            cout << "White can win in one move." << endl;
        } else if(analyser.is_black_can_win()) {
            cout << "Black can win in one move." << endl;
        } else {
            cout << "There is no winning path." << endl;
        }
    }
    
    return 0;
}