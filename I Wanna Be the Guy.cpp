//By Pranjal Gupta
#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MAX 1000
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define pcc pair<char,char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define mp(a,b) make_pair(a,b)
#define F first
#define S second
#define pb(x) push_back(x)
#define endl '\n'

typedef long long ll;
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }

// cout<< setprecision(16)<<fixed<<sol;


ll power(ll a,ll b, ll m=MOD)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res=(res*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return res;
}
ll inverse(ll a,ll m=MOD)
{
    return power(a,m-2,m);
}

bool dist(int n){
    int cnt[10];
    memset(cnt,0,sizeof cnt);
    while(n){
        cnt[n % 10]++;
        n /=10;
    }
    return *max_element(cnt,cnt+10)==1;
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,p,q;
	cin>>n;
	set<int> ss;
	cin>>p;
	while(p--){
	    int x;
	    cin>>x;
	    ss.insert(x);
	}
	cin>>q;
	while(q--){
	    int x;
	    cin>>x;
	    ss.insert(x);
	}
	if(ss.size()==n) cout<<"I become the guy.";
	else cout << "Oh, my keyboard!";
	cin.get();cin.get();
	return 0;
}
