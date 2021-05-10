#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin>>s;
    int cnt[26];
    int cc=0;
    memset(cnt,0,sizeof cnt);
    for(auto ch:s){
        cnt[ch-'a']++;
    }
    for(auto i=0;i<26;i++){
        cc += (cnt[i]>0);
    }
    
    if(cc%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout <<"IGNORE HIM!";
    }
    
    cin.get(); cin.get();
    return 0;
}