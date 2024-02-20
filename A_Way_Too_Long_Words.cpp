#include<bits/stdc++.h>
using namespace std;

/*
If world is long count the between alphabets and replace
Else print normally
*/

int main(){

    int n;
    cin>>n;

    string s;

    for(int i=0;i<n;i++ ){
        cin>>s;
        if(s.size()>10){
            int cnt=0;
            for(int i=1;i<s.size()-1;i++ ){
                cnt++;
            }
            cout<<s[0]<<cnt<<s[s.size()-1]<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }

    return 0;

}