//By Pranjal Gupta
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,a,b,cc=0;
	cin>>n;
	while(n--){
	    cin>>a>>b;
	    cc = max(cc,cc-a+b);
	}
	cout << cc;
	cin.get();cin.get();
	return 0;
}
