//By Pranjal Gupta
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a=0,d=0;
	for(auto ch:s){
	    if(ch=='A') a++;
	    else d++;
	}
	if(a>d) cout << "Anton";
	else if(a<d) cout << "Danik";
	else cout << "Friendship";
	cin.get();cin.get();
	return 0;
}
