//By Pranjal Gupta
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	
	while(t--){
	    for(int i=0;i<s.size()-1;){
	        if(s[i]=='B' and s[i+1]=='G'){
	            swap(s[i],s[i+1]);
	            i+=2;
	        }
	        else{
	            i++;
	        }
	    }
	    
	}
	cout << s;
	
	cin.get();cin.get();
	return 0;
}
