#include <stdio.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>


using namespace std;

#define M_PI           3.14159265358979323846  /* pi */

#define SQ1 (M_PI / 4)
#define SQ2 (2 - M_PI/4)

#define MAX_SIZE 101



class TestCase {
public:
	TestCase(const char lines[][MAX_SIZE], int rows, int cols) : m_lines(lines), m_rows(rows), m_cols(cols), m_results{}
	{
		
	}

	double solve_point(int y, int x) {
		if(y % 2 == 1 && x % 2 == 1) {					// center of cell
			int row = y / 2, col = x / 2, cell_type = get_cell_type(row, col);
			return cell_type == 0 ? solve_point(y + 1, x - 1) : solve_point(y - 1, x - 1);
		}
		if(y % 2 == 1 || x % 2 == 1) {          // border of curve
			return 0;
		}

		// x and y are even

		int yy = y, xx = x;
		if(yy >= 2 * m_rows) yy--;   // special case: bottom border points
		if(xx >= 2 * m_cols) xx--;   // adn right border points

		return solve_corner_point(yy, xx);
	}

	bool is_valid_corner(int y, int x) {
		return (0 <= y) && (0 <= x) && (y < 2 * m_rows) && (x < 2 * m_cols);
	}


	double solve_corner_point(int y, int x) {
		if(m_results[y][x]) {
			return *m_results[y][x];
		}
		double *result = new double;
		*result = 0;

		queue< pair<int, int> > q;

		q.push(make_pair(y, x));
		m_results[y][x] = result;

		while(!q.empty()){
			pair<int, int> v = q.front();
			q.pop();
			y = v.first;
			x = v.second;

			//printf("Visiting: %d %d \n", y, x);

			int cell_type = get_cell_type(y/2, x/2);

			int yy = y + (y % 2 ? 1 : -1);   // ajacent point coords
			int xx = x + (x % 2 ? 1 : -1);

			if(is_valid_corner(y , xx) && !m_results[y ][xx]) { m_results[y ][xx] = result; q.push(make_pair(y , xx)); /*printf("+ Adding %d %d\n", y , xx); */ }
			if(is_valid_corner(yy, x ) && !m_results[yy][x ]) { m_results[yy][x ] = result; q.push(make_pair(yy, x )); /*printf("+ Adding %d %d\n", yy, x ); */ }
			if(is_valid_corner(yy, xx) && !m_results[yy][xx]) { m_results[yy][xx] = result; q.push(make_pair(yy, xx)); /*printf("+ Adding %d %d\n", yy, xx); */ }

			if(cell_type == 0 && (x + y) % 2 == 1) {
				yy = (y / 2) * 2 + x % 2;
				xx = (x / 2) * 2 + y % 2;
				if(is_valid_corner(yy, xx) && !m_results[yy][xx]) { m_results[yy][xx] = result; q.push(make_pair(yy, xx)); /*printf("+ Adding %d %d\n", yy, xx); */ }

				(*result) += SQ2;
			} else if(cell_type == 1 && (x + y) % 2 == 0) {
				yy = (y / 2) * 2 + 1 - y % 2;
				xx = (x / 2) * 2 + 1 - x % 2;
				if(is_valid_corner(yy, xx) && !m_results[yy][xx]) { m_results[yy][xx] = result; q.push(make_pair(yy, xx)); /*printf("+ Adding %d %d\n", yy, xx); */ }

				(*result) += SQ2;
			} else {
				(*result) += SQ1;
			}
		}

		return *result;
	}

private:
	int m_rows, m_cols;
	const char (*m_lines)[MAX_SIZE];
	double * m_results[2*MAX_SIZE][2*MAX_SIZE];



	int get_cell_type(int row, int col) {
		if(0 <= row && row < m_rows && 0 <= col && col < m_cols) {
			char c = m_lines[row][col];
			if(c == '0') return 0;
			else return 1;
		}
		return -1;
	}

};



int main() {
	ios::sync_with_stdio(false);

	int T;
	scanf("%d\n", &T);

	for(int t = 1; t <= T; t++) {
		printf("Case %d:\n", t);
		int R,C;
		scanf("%d %d", &R, &C);
		char lines[MAX_SIZE][MAX_SIZE];
		for(int i = 0; i < R; i++) {
			scanf("%s", lines[i]);
		}
		TestCase tc(lines, R, C);
		int Q;
		scanf("%d", &Q);

		for(int i = 0; i < Q; i++) {
			int y, x;
			scanf("%d %d", &y, &x);
			printf("%0.10f\n", tc.solve_point(y, x));
		}
	}


  return 0;
}