#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int cc=0;
    while(n--){
        string s;
        cin>>s;
        if(s[1]=='+') cc++;
        else cc--;
    }
    cout << cc;
    return 0;
}