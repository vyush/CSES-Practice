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
	int n;cin>>n;
	map<ll,ll>mp;
	vll ans(n);
	ll aans = 0;
	ll sum = 0;
	array<ll,3>fs[n];
	rep(i,n)
	{
		cin>>fs[i][1]>>fs[i][0];
		fs[i][2] = i;
		mp[fs[i][1]]++;mp[fs[i][0]+1]--;
	} 
	for(auto it:mp)
	{
		sum += it.second;
		aans = max(aans,sum);
	}
	set<pair<ll,ll>>s;
	sort(fs,fs+n);
	rep(i,n)
	{
		auto it = s.lower_bound({fs[i][1],-1});
		if(it!=s.begin())
		{
			it--;
			ans[fs[i][2]] = it->second;
			s.erase(it);
		}
		else
		{
			ans[fs[i][2]] = s.size();
		}
		s.insert({fs[i][0],ans[fs[i][2]]});
	}
	cout<<aans<<endl;
	rep(i,n)
	{
		cout<<ans[i]+1<<" ";
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
