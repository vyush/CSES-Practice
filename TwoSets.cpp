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
#define debugggg(i,j,k,ans) std::cerr << #i << ": " << i << "  "<< #j << ": " << j <<#k << ": " << k <<#ans << ": " << ans << std::endl;
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
  ll sum = (n)*(n+1)/2;
  vll v1,v2;
  if(sum&1){
	  cout<<"NO"<<endl;return 0;
  }
  cout<<"YES"<<endl;
  ll temp = 0;
  if(n%4){v1.pb(1);v1.pb(2);v2.pb(3);temp =3;}
  for(int i = 0;i<(n)/4;i++)
  {
	  v1.pb(temp + 4*i+1);
	  v1.pb(4*i+4+temp);
	  v2.pb(4*i+2+temp);
	  v2.pb(4*i+3+temp);
  }
  cout<<v1.size()<<endl;
  rep(i,v1.size())
  {
	  cout<<v1[i]<<" ";
  }
  cout<<endl;
  cout<<v2.size()<<endl;
  rep(i,v2.size())
  {
	  cout<<v2[i]<<" ";
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
	#endif */
	solve();
	/* #ifndef ONLINE_JUDGE
	cout<<"\nTime Elapsed: "<<1.0*clock()/ CLOCKS_PER_SEC <<" Sec\n";
	#endif */
	return 0;
}
