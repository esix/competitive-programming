/* macros.h */

typedef vector< int > vi;
typedef vector < vector<int> > vii;

/* forall macro for GCC: */
#define forall(i, v) for( typeof(v.begin()) i = v.begin(); i != v.end() ; i++ )

/* forall macro for others */
#define forall2(i, v, type) for( type::iterator i = v.begin(); i != v.end() ; i++ )

#define all(v) v.begin(),v.end()

#define loop(i, n) for(int i = 0; i < n; i++)
#define pb push_back
#define sz(v) v.size()

#define belongs(x, c) (find((c).begin(), (c).end(), x) != (c).end())

// operator EQUAL for floating point.
#define EPS 1e-7
#define LEPS 1e-7
typedef long double ldouble

template<typename T> inline bool eq(T a, T b) { return a == b; }
inline bool eq(double a, double b) { return fabs(a-b) < EPS; }
inline bool eq(ldouble a, ldouble b) { return fabsl(a-b) < LEPS; }
inline bool eq(double a, ldouble b) { return fabsl(ldouble(a)-b) < EPS; }
inline bool eq(ldouble a, double b) { return fabsl(a-ldouble(b)) < EPS; }

template<typename T1, typename T2> 
inline bool eq(T1 a, T2 b) { T1 _b = b; return eq(a, _b); }