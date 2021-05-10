#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int arr[5][5];
    for(ll i=0;i<5;i++){
        for(ll j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                cout << abs(i-2)+abs(j-2);
                return 0;
            }
        }
    }
    return 0;
}