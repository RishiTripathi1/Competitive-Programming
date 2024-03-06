#include<bits/stdc++.h>
using namespace std;

/*
Count frequency and print accordingly
*/

int main(){

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int cnta=0, cntb=0;
        for(char c : s){
            if(c=='A') cnta++;
            else cntb++;
        }
        
        if(cnta>cntb) cout<<'A'<<"\n";
        else cout<<'B'<<"\n";
    }

}