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

// bool dist(int n){
//     int cnt[10];
//     memset(cnt,0,sizeof cnt);
//     while(n){
//         cnt[n % 10]++;
//         n /=10;
//     }
//     return *max_element(cnt,cnt+10)==1;
    
// }

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int *a = new int[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	int *ans = new int[n+1];
	for(int i=1;i<=n;i++){
	    ans[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
	    cout << ans[i]<<' ';
	}
	delete []a;
	delete []ans;
	cin.get();cin.get();
	return 0;
}
