#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cc=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]) cc++;
    }
    cout << cc;
    
    cin.get(); cin.get();
    return 0;
}