#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n= s.size();
        if(n>10){
            cout<<s[0]<< to_string(n-2) << s[n-1]<<endl;
        }
        else{
            cout<< s<<endl;
        }
    }
    return 0;
}