// Declaration shortcuts
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef unordered_set<ll> usll;
template<typename T> using uset = unordered_set<T>; 
template<typename K, typename V> using umap = unordered_map<K, V>;

// Constant shortcuts
#define mod 1000000007LL
#define imax INT_MAX
#define imin INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define inf 1e9
#define INF 1e16

#define pb push_back
#define SZ(x) x.size()

// Vector shortcuts
#define SORT(a) sort(ALL(a))
#define REVERSE(a) reverse(ALL(a))
#define RSORT(v) sort((v).rbegin(), (v).rend())
#define ALL(a) (a).begin(), (a).end()
#define SUM(v) accumulate(ALL(v), 0LL)
#define LB(v, x) (lower_bound(ALL(v), x) - (v).begin())
#define UB(v, x) (upper_bound(ALL(v), x) - (v).begin())
#define BS(v, x) binary_search(ALL(v), x)

// Traversal shortcuts
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORr(i, a, b) for (int i = (a); i >= (b); i--)
#define itrALL(c, itr) for (auto itr = (c).begin(); itr != (c).end(); itr++)

// Math ops shortcuts
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a)/__gcd(a,b)*(b))

// Bitwise ops shortcuts
#define setbit(x,i) (x | (1LL << i))
#define clearbit(x,i) (x & ~(1LL << i))
#define checkbit(x,i) ((x >> i) & 1)

// Pair shortcuts
#define F first
#define S second
#define MP make_pair

#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(a, b) cout << a << ": " << b << '\n'
#define Debug cout << "Reached here" << '\n'
#define lc ((node) << 1)
#define rc ((node) << 1 | 1)
#define ms(x, y) memset(x, y, sizeof(x))

// Printing shortcuts
#define YES cout << "YES" << '\n' 
#define NO cout << "NO" << '\n'
#define prnt(a) cout << a << "\n"
#define PrintPair(x) cout << x.first << " " << x.second << '\n'
#define VecPrnt(v)       \
    FOR(J, 0, v.size())  \
    cout << v[J] << " "; \
    cout << '\n'
#define ArrPrint(a, st, en)        \
    for (int J = st; J <= en; J++) \
        cout << a[J] << " ";       \
    cout << '\n';

/* Direction Array

// int fx[]={1,-1,0,0};
// int fy[]={0,0,1,-1};
// int fx[]={0,0,1,-1,-1,1,-1,1};
// int fy[]={-1,1,0,0,1,1,-1,-1};

Time Complexity -
n <= 10     : O(n!)
n <= 5*10   : O(2^n)
n <= 5*10^2 : O(n^3)
n <= 5*10^3 : O(n^2)
n <= 10^6   : O(n*logn) / O(n)
n  > 10^8   : O(logn) / O(1)

*/
/***************** END OF HEADER *****************/
