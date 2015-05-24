#include <iostream>
#include <sstream>
#include <vector>
#include <set>
#include <algorithm>


using namespace std;

#define M_PI           3.14159265358979323846  /* pi */

#define SQ1 (M_PI / 4)
#define SQ2 (2 - M_PI/4)

enum Corner {
	NW = 1,
	NE = 2,
	SW = 3,
	SE = 4
};

struct Cell {
	Cell(int r, int c, Corner cc) : row(r), col(c), corner(cc) {}
	int row;
	int col;
	Corner corner;
	bool operator<(const Cell& rhs) const {
		if(row < rhs.row) return true;
		if(row > rhs.row) return false;
		if(col < rhs.col) return true;
		if(col > rhs.col) return false;
		if(corner < rhs.corner) return true;
		return false;
	}
	bool operator==(const Cell& rhs) const {
		return row == rhs.row && col == rhs.col && corner == rhs.corner;
	}
	string to_string() const {
		stringstream ss;
		string dir;
		switch(corner) {
			case NE: dir = "NE"; break;
			case NW: dir = "NW"; break;
			case SE: dir = "SE"; break;
			case SW: dir = "SW"; break;
		}
		ss << "(" << row << "," << col << ":" << dir << ")";
		return ss.str();
	}
};


class TestCase {
public:
	TestCase(const vector<string>& lines, int rows, int cols) : m_lines(lines), m_rows(rows), m_cols(cols)
	{
	}

	double solve_point(int y, int x) {
		set<Cell> pending = get_cells(y, x, set<Cell>());
		set<Cell> visited;

		while(!pending.empty()) {
			visited.insert(pending.begin(), pending.end());

			/*set<Cell> adjacent = get_adjacent_cells_for_cells(pending);
			pending.clear();
			set_difference(adjacent.begin(), adjacent.end(),
				visited.begin(), visited.end(),
				std::inserter(pending, pending.begin()));*/
			pending = get_adjacent_cells_for_cells(pending, visited);
		}

		double result = 0;
		//cout << "Point " << y << "," << x << endl << "        ";
		for(set<Cell>::const_iterator it = visited.begin(); it != visited.end(); it++) {
			//cout << it->to_string();
			Cell cell = *it;
			int v = get_cell_type(cell.row, cell.col);
			if(v == 0 && (cell.corner == NW || cell.corner == SE)) result += SQ1;
			if(v == 0 && (cell.corner == SW || cell.corner == NE)) result += SQ2;
			if(v == 1 && (cell.corner == NW || cell.corner == SE)) result += SQ2;
			if(v == 1 && (cell.corner == SW || cell.corner == NE)) result += SQ1;
		}
		//cout << endl;
		return result;
	}

private:
	int m_rows, m_cols;
	vector<string> m_lines;

	bool is_point_zero(int y, int x) {
		return (y + x) % 2 == 1;
	}

	int get_cell_type(int row, int col) {
		if(0 <= row && row < m_rows && 0 <= col && col < m_cols) {
			char c = m_lines[row][col];
			if(c == '0') return 0;
			else return 1;
		} 
		return -1;
	}

	set<Cell> get_cells(int y, int x, const set<Cell>& exclude) {
		set<Cell> cells;

		if(x % 2 == 1 && y % 2 == 1) {
			int row = y / 2, col = x / 2;
			int cell_type = get_cell_type(row, col);
			if(cell_type == 0) {
				Cell cellNE(row,col,NE);
				if(exclude.find(cellNE) == exclude.end()) cells.insert(cellNE);
				Cell cellSW(row,col,SW);
				if(exclude.find(cellSW) == exclude.end()) cells.insert(Cell(row,col,SW));
			} else if(cell_type == 1) {
				Cell cellNW(row,col,NW);
				if(exclude.find(cellNW) == exclude.end()) cells.insert(Cell(row,col,NW));
				Cell cellSE(row,col,SE);
				if(exclude.find(cellSE) == exclude.end()) cells.insert(Cell(row,col,SE));
			}
		} else if(x % 2 == 1 || y % 2 == 1) {
			// none of cells here
		} else {
			int row = y / 2, col = x / 2;

			if(get_cell_type(row-1, col-1) != -1) {
				Cell cell(row-1, col-1, SE);
				if(exclude.find(cell) == exclude.end()) cells.insert(cell);
			}

			if(get_cell_type(row, col-1) != -1) {
				Cell cell(row, col-1, NE);
				if(exclude.find(cell) == exclude.end()) cells.insert(cell);
			}

			if(get_cell_type(row-1, col) != -1) {
				Cell cell(row-1, col, SW);
				if(exclude.find(cell) == exclude.end()) cells.insert(cell);
			}

			if(get_cell_type(row, col) != -1) {
				Cell cell(row, col, NW);
				if(exclude.find(cell) == exclude.end()) cells.insert(cell);
			}
		}
		return cells;
	}

	set<Cell> get_adjacent_cells(const Cell& cell, const set<Cell>& exclude) {
		int row = cell.row, col = cell.col, y = row * 2, x = cell.col * 2;
		switch(cell.corner) {
			case NW: break;
			case SW: y += 2; break;
			case NE: x += 2; break;
			case SE: x += 2; y += 2; break;
		}
		int v = get_cell_type(row, col);
		set<Cell> cells = get_cells(y, x, exclude);
		if(v == 0 && cell.corner == NE) { 
			Cell cell(row, col, SW);
			if(exclude.find(cell) == exclude.end()) cells.insert(cell);
		}
		if(v == 0 && cell.corner == SW) { 
			Cell cell(row, col, NE); 
			if(exclude.find(cell) == exclude.end()) cells.insert(cell);
		}
		if(v == 1 && cell.corner == NW) { 
			Cell cell(row, col, SE); 
			if(exclude.find(cell) == exclude.end()) cells.insert(cell);
		}
		if(v == 1 && cell.corner == SE) { 
			Cell cell(row, col, NW); 
			if(exclude.find(cell) == exclude.end()) cells.insert(cell);
		}
		return cells;
	}

	set<Cell> get_adjacent_cells_for_cells(const set<Cell>& cells, const set<Cell>& exclude) {
		set<Cell> result;
		for(set<Cell>::const_iterator it = cells.begin(); it != cells.end(); ++it){
			set<Cell> adjacent = get_adjacent_cells(*it, exclude);
			result.insert(adjacent.begin(), adjacent.end());
		}
		return result;
	}
};



int main() {
	ios::sync_with_stdio(false);
	cout.precision(11);

	int T;
	cin >> T;

	for(int t = 1; t <= T; t++) {
		cout << "Case " << t << ":" << endl;
		int R,C;
		cin >> R >> C;
		vector<string> lines;
		for(int i = 0; i < R; i++) {
			string line;
			cin >> line;
			lines.push_back(line);
		}
		TestCase tc(lines, R, C);
		int Q;
		cin >> Q;
		for(int i = 0; i < Q; i++) {
			int y, x;
			cin >> y >> x;
			cout << tc.solve_point(y, x) << endl;
		}
	}


    return 0;
}
