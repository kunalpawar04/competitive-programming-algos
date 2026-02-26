typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

template<typename T> using uset = unordered_set<T>; 
#define usll unordered_set<ll>
template<typename K, typename V> using umap = unordered_map<K, V>;

#define SORT(a) sort(a.begin(), a.end())
#define REVERSE(a) reverse(a.begin(), a.end())
#define ALL(a) a.begin(), a.end()

#define MP make_pair
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define mod 1000000007LL

#define YES cout << "YES" << '\n' 
#define NO cout << "NO" << '\n'

#define prnt(a) cout << a << "\n"
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORr(i, a, b) for (int i = (a); i >= (b); i--)
#define PrintPair(x) cout << x.first << " " << x.second << '\n'
#define itrALL(c, itr) for (auto itr = (c).begin(); itr != (c).end(); itr++)
#define VecPrnt(v)       \
    FOR(J, 0, v.size())  \
    cout << v[J] << " "; \
    cout << '\n'
#define ArrPrint(a, st, en)        \
    for (int J = st; J <= en; J++) \
        cout << a[J] << " ";       \
    cout << '\n';

#define pb push_back
#define inf 1e9
#define INF 1e16
#define MAX 100005
#define debug(a, b) cout << a << ": " << b << '\n'
#define Debug cout << "Reached here" << '\n'
#define lc ((node) << 1)
#define rc ((node) << 1 | 1)
#define EPS 1e-9
#define PI acos(-1)
#define ms(x, y) memset(x, y, sizeof(x))

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
