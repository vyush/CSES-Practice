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
set<pair<ll,ll>>high;
set<pair<ll,ll>>low;
ll n,k;
vll a(200005);
void in(pair<ll,ll> x)
{
	if(low.size()<(k+1)/2)
	{
		low.insert(x);
	}
	else
	{
		auto it = low.end();
		it--;
		if(low.lower_bound(x)!=low.end())
		{
			pair<ll,ll> y = (*it);
			low.erase(it);
			high.insert(y);
			low.insert(x);
		}
		else
		{
			high.insert(x);
		}
	}
	return;
}
void out(pair<ll,ll> x)
{
	if(low.find(x)!=low.end())
	{
		low.erase(x);
		auto it = high.begin();
		pair<ll,ll> y = *it;
		low.insert(y);
		high.erase(it);
	}
	else
	{
		high.erase(x);
	}
	
}
int solve()
{
	cin>>n>>k;
	rep(i,n)cin>>a[i];
	vll ans;
	if(k==1)
	{
		rep(i,n)
		{
			cout<<a[i]<<" ";
		}
		return 0;
	}
	rep(i,k)
	{
		in({a[i],i});
	}
	auto it = low.end();
	it--;
	ans.pb((*it).first);
	int j = 0;
	rep_a(i,k,n)
	{
		out({a[j],j});
		in({a[i],i});
		auto it = low.end();
		it--;
		ans.pb((*it).first);
		j++;
	}
	rep(i,ans.size())
	{
		cout<<ans[i]<<endl;
	}
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
