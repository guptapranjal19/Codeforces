#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll k,n,w;
    cin>>k>>n>>w;
    ll cost = w*(w+1)>>1;
    cost *= k;
    cout<< max(cost-n,(ll)0);
    
    cin.get(); cin.get();
    return 0;
}