//By Pranjal Gupta
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin>>s;
	int u=0,l=0;
	for(auto i=0;i<s.size();i++){
	    if(s[i]>='a' and s[i]<='z') l++;
	    else u++;
	}
	if(l>=u){
	    for(auto i=0;i<s.size();i++){
	        if(s[i]>='a' and s[i]<='z'){
	            cout<<s[i];
	        }
	        else{
	            cout<<(char)(s[i]-'A'+'a');
	        }
	    }
	}
	else{
	    for(auto i=0;i<s.size();i++){
	        if(s[i]>='A' and s[i]<='Z'){
	            cout<<s[i];
	        }
	        else{
	            cout<<(char)(s[i]-'a'+'A');
	        }
	    }
	}
	
	cin.get();cin.get();
	return 0;
}
