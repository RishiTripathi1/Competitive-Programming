#include<bits/stdc++.h>
using namespace std;

/*
Sort the string and check for distinct value consiquetively
Apply condition
*/

int main(){

    string s;
    cin>>s;
    int cnt=0;
    sort(s.begin(),s.end());
    for(int i=1;i<=s.size();i++ ){
        if(s[i]!=s[i-1]) cnt++;
    }
    if(cnt%2==0) cout<<"CHAT WITH HER!"<<"\n";
    else cout<<"IGNORE HIM!"<<"\n";
}