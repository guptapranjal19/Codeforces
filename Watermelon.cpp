#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int w;
    cin>>w;
    if(w&1 or w==2){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
    return 0;
}