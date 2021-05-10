//By Pranjal Gupta
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll n;
	cin>>n;
	string s;
	s = to_string(n);
	int cc=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='4' or s[i]=='7') cc++;
	}
	
	if(cc==4 or cc==7) cout << "YES";
	else cout << "NO";
	
	cin.get();cin.get();
	return 0;
}
