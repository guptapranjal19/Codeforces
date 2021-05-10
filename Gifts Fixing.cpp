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
#define txt  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

typedef long long ll;
template<typename T> T gcd(T a,T b) { if(b==0) return a; return gcd(b,a%b); }

// cout<< setprecision(16)<<fixed<<sol;
// cout.precision(16);
// cout << fixed << b;


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

bool isPrime(int n)
{
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        return false;
    }
    
    return true;
}


vector<int> primes;
void sieve ()
{
    int i, j;
    bitset <3200> b;
    b.set();
    b[0]=b[1]=0;
    for (i=2; i<=3180; i++)
    {
        if (b[i]==1)
        {
            for (j=i*i; j<=3180; j+=i)
                b[j]=0;
            primes.pb(i);
        }
    }
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
	int t; cin>>t;
	while (t--){
	    int n;
	    cin>>n;
	    vector<ll> a(n),b(n);
	    for(ll&x :a) cin>>x;
	    for(ll&x :b) cin>>x;
	    ll z=0;
	    ll aa = *min_element(a.begin(),a.end());
	    ll bb = *min_element(b.begin(),b.end());
	    for(int i=0;i<n;i++){
	        z += max(a[i]-aa,b[i]-bb);
	    }
	    cout << z << '\n';
	}
	cin.get();cin.get();
	return 0;
}
