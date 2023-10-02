
#include <bits/stdc++.h>

using namespace std;
// #define unit __int128
#define ll long long int
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define eb emplace_back
#define np next_permutation
#define inf 1e18
#define umap unordered_map
#define pumap unordered_map<pair<ll,ll>,ll, hashFunction>
#define uset unordered_set
#define Mod 1000000007
#define Modx 998244353
#define set_bits __builtin_popcountll
#define zerobits(x) __builtin_ctzll(x)
#define pii pair<ll,ll>
#define rep(i,st,en) for(ll i=st;i<en;i++)
#define rrep(i,st,en) for(ll i=en-1;i>=st;i--)
#define vi vector<ll>
#define vii vector<pii>
#define PI 3.14159265358979323846
#define minpq priority_queue <ll, vector<ll>, greater<ll>>
#define maxpq priority_queue<ll>
#define yes cout<<"Yes"<<endl; return;
#define no cout<<"No"<<endl; return;
#define flus1 fflush(stdout);
#define flus2 cout<<flush;
#define debug(x) cout<<#x<<" : "<<x<<" "<<'\n';
#define fin cout<<endl;
#define ff first
#define ss second
#define sz size
#define pb push_back
#define lowercase(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define uppercase(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define endl '\n'
#define sep cout<<"------------------"<<endl;


template<class T> void _print(T t){ cout << t;}
template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.fi); cout << ","; _print(p.se); cout << "}";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
template<typename T> istream& operator>>(istream& in, vector<T>& a) {for(auto &x : a) in >> x; return in;};
template<typename T> ostream& operator<<(ostream& out, vector<T>& a) {for(auto &x : a) out << x << ' '; return out;};
// template<typename T1, typename T2> ostream& operator<<(ostream& out, const p<T1, T2>& x) {return out << x.f << ' ' << x.s;}
// template<typename T1, typename T2> istream& operator>>(istream& in, p<T1, T2>& x) {return in >> x.f >> x.s;}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a,ll b){ return (a / gcd(a, b)) * b;}
ll mod_pow(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);} 
ll mminvprime(ll a, ll b) {return mod_pow(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void facebook(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m

ll Sqrt(ll x){ ll y=sqrt(x)+5;while(y*y>x)y--;return y;}
vi divisors(ll n){vi div;for(ll i=1;i*i<=n;i++){ if(n%i==0) { div.pb(i); if(n/i!=i) div.pb(n/i); }} return div;}
bool isEqual(vector<ll>& a,vector<ll>& b){int n = a.size(); rep(i,0,n){if(a[i]!=b[i]){return false;}}return true;}
ll Ceil(double x){if((int)x == x) return x; return x+1;}
ll my_sqrt(ll a){ll l=0,r=5000000001;while(r-l>1){ll mid=(l+r)/2;if(1ll*mid*mid<=a)l=mid;else r=mid;}return l;}
vector<ll> sortOrder(vi& a){vi order(a.size()); iota(order.begin(), order.end(), 0);sort(order.begin(), order.end(), [&](int i, int j) {return a[i] < a[j];});return order;}
struct hashFunction{size_t operator()(const pair<int , int> &x) const{return x.first ^ x.second;}};
string decToBinary(int n){string t =""; for (int i = 31; i >= 0; i--){int k = n >> i;if (k & 1)t+="1"; else t+="0";} return t; }
ll dx[]={1,0,0,-1,1,1,-1,-1};
ll dy[]={0,-1,1,0,1,-1,-1,1}; 
bool check_ind(ll x,ll y, ll n,ll m){return (x>=0 && y>=0 && x<n && y<m);}
umap<ll,ll> freq(vi&a){umap<ll,ll> mp;for(auto x : a){mp[x]++;}return mp;}
vector<ll> getUnique(vector<ll> a){ vector<ll> un;unordered_set<ll> s;for(auto x : a) s.insert(x);for(auto x: s) un.push_back(x);return un;}
/*---------------------------------------- ----------------------------------------------------------------------------------*/

void solve(){


} 
  
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t t1= clock();
    int t=1;
    cin>>t;

    while(t--){
        solve();
    }
    cout<<"Time elapsed: "<<(double)(clock()-t1)/1000<<" s"<<endl;
}
