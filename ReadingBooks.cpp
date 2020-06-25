#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define db double
#define ld long double
#define rep(i,n) for(ll i=0;i<n;i++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define rep_a(i,a,n) for(ll i=a;i<n;i++)
#define pb push_back
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#define debug(x) do { std::cerr << #x << ": " << x << std::endl; } while (0);
#define debugg(x,y) do { std::cerr << #x << ": " << x << "  "<< #y << ": " << y << std::endl; } while (0);
#define debugggg(i,j,k,ans) std::cerr << #i << ": " << i << "  "<< #j << ": " << j << "  "<<#k << ": " << k << "  "<<#ans << ": " << ans << "  "<< std::endl;
const long long mod = 998244353;
const long long MOD = 1000000007;

typedef vector<ll>              vll;
typedef vector<string>          vstr;
typedef vector<char>            vchar;
typedef vector<pair<ll,ll> >    vpll;
typedef set<ll>                 sll;
typedef set<string>             sstr;
typedef set<pair<ll,ll> >       spll;
typedef map<ll,ll>              mllll;
typedef map<string,ll>          mstrll;
typedef queue<ll>               qll;
vll ans(2000005,0);
int solve()
{
	ll n;cin>>n;
	vll a(n);
	rep(i,n)cin>>a[i];
	sort(all(a));
	ll sum = 0;
	rep(i,n-1)
	sum += a[i];
	ll res = 0;
	if(a[n-1]>=sum)
	{
		res = 2*a[n-1];
	}
	else
	{
		ll b = sum - a[n-1];
		b = sum - b;
		res = sum + max(b,a[n-1]);
	}
	cout<<res<<endl;
	return 0;
}
int main()
{
  fast;
	/*  #ifndef ONLINE_JUDGE
	freopen("sort.in", "r", stdin);
	freopen("output.txt", "w", stdout);
	#else
	#endif
	solve();
	return 0; */
	solve();
}
