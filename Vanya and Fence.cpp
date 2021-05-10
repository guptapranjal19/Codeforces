//By Pranjal Gupta
#include <bits/stdc++.h>
using namespace std;
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
	int n,h,cc=0;
	cin>>n>>h;
	while(n--){
	    int no;
	    cin>>no;
	    if(no>h) cc+=2;
	    else cc++;
	}
	cout << cc;
	cin.get();cin.get();
	return 0;
}
