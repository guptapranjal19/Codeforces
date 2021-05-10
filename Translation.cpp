//By Pranjal Gupta
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s,t;
	cin>>s>>t;
	reverse(t.begin(),t.end());
	cout << ( s == t ? "YES":"NO");
	cin.get();cin.get();
	return 0;
}
