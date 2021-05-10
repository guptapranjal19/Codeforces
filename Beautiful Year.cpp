//By Pranjal Gupta
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;

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
	int n;
	cin>>n;
	n++;
	while(!dist(n)){
	    n++;
	}
	cout << n;
	cin.get();cin.get();
	return 0;
}
