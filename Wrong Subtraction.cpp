#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n,k;
    cin>>n>>k;
    while(k--){
        if(n%10) n--;
        else n/=10;
    }
    cout << n;
    
    cin.get(); cin.get();
    return 0;
}