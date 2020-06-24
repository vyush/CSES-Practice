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
	string s;
	cin>>s;
	vll alp(26,0);
	rep(i,s.length())
	{
		alp[s[i]-'A']++;
	}
	int odd = 0,even = 0;
	string ans = "";
	string temp = ""; 
	rep(i,26)
	{
		if(alp[i]&1)odd++;
		else even++;
	}
	if(s.length()&1)
	{
		char o = '\0';
		if(odd==1)
		{
			rep(i,26)
			{
				if(alp[i]&1)o = (char)(i+'A');
				rep(j,alp[i]/2)
				{
					temp+=char(i+'A');
					
				}
			}
			ans = temp + o;
			reverse(all(temp));
			ans+=temp;
			cout<<ans<<endl;
		}
		else
		{
			cout<< "NO SOLUTION"<<endl;
		}
	}
	else
	{
		
		if(odd)cout<< "NO SOLUTION"<<endl;
		else
		{
			rep(i,26)
			{
				rep(j,alp[i]/2)
				{
					temp+=char(i+'A');
				}
			}
			ans = temp;
			reverse(all(temp));
			ans+=temp;
			cout<<ans<<endl;
		}
		
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
