#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0;i<n;i+=2){
        for(int j=i+2;j<n;j+=2){
            if(s[i]>s[j]) swap(s[i],s[j]);
        }
    }
    cout << s;
    
    return 0;
}