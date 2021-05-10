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
    if(s[0]>='a' and s[0]<='z'){
        s[0] = (char)(s[0]-'a'+'A');
    }
    cout << s;
    cin.get(); cin.get();
    return 0;
}