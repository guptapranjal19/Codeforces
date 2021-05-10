#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,cc=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1] and a[i]>0){
            cc++;
        }
    }
     cout << cc;
    
    
    return 0;
}