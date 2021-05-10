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
	ll cc = (n/5) + (n%5==0?0:1);
	cout << cc << endl;
	cin.get();cin.get();
	return 0;
}
