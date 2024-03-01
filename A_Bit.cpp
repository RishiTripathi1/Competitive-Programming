#include<bits/stdc++.h>
using namespace std;

/*
Only need to check the mid of the string
*/

int main(){

    int n;
    cin>>n;
    int ans=0;
    while(n--){
        string s;
        cin>>s;

        if(s[1]=='+') ans++;
        else ans--; 
    }

    cout<<ans;

}