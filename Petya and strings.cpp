#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin>>a>>b;
    int n1 = a.size();
    int n2 = b.size();
    for(ll i=0;i<n1;i++){
        a[i] = tolower(a[i]);
    }
    for(ll i=0;i<n2;i++){
        b[i]= tolower(b[i]);
    }
    if(a<b) cout << -1;
    else if(a>b) cout << 1;
    else cout <<0;
    return 0;
}