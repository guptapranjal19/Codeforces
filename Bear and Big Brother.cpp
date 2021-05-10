#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a,b;
    cin>>a>>b;
    int cc=0;
    while(a<=b){
        a *= 3;
        b *= 2;
        cc++;
    }
    cout << cc;
    
    cin.get(); cin.get();
    return 0;
}