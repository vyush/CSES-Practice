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
int solve()
{
	int n;cin>>n;
	vector<vll>dp(n+1,vll(n+1,0));
	vector <string> a(n);
	rep(i,n)cin>>a[i];
	if(a[0][0] == '*'||a[n-1][n-1] == '*')
	{
		cout<<0<<endl;
		return 0;
	}
	dp[1][1] = 1;
	rep_a(i,1,n+1)
	{
		rep_a(j,1,n+1)
		{
			if(i+1<=n && a[i][j-1]!='*')
			{
				dp[i+1][j] += dp[i][j];
				dp[i+1][j] = dp[i+1][j]%MOD;
			}
			if(j+1<=n && a[i-1][j]!='*')
			{
				dp[i][j+1] += dp[i][j];
				dp[i][j+1] =dp[i][j+1] %MOD;
			}
		}
	}
	cout<<dp[n][n]%MOD<<endl;
	return 0;
}
int main()
{
  fast;
	/* #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#else
	#endif
	solve();
	#ifndef ONLINE_JUDGE
	cout<<"\nTime Elapsed: "<<1.0*clock()/ CLOCKS_PER_SEC <<" Sec\n";
	#endif */
	solve();
	return 0;
}
