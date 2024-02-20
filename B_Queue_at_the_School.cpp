#include<bits/stdc++.h>
using namespace std;

/*
Jabtak time 0 nahi hojata
String me agar i me G hai and i-1 me B to change
(ek time me ek couple ka ek change hoyega sirf isiliye i++ inside the loop)

Ex: BGGBG with only 1 i++ == GGBGB which is wrong
with 2 i++ do ka change hone ke baad next do pe jaao
*/

int main(){

    int n,t;
    string s;
    cin>>n>>t>>s;

    while(t--){
        for(int i=1;i<n;i++){
            if(s[i]=='G' && s[i-1]=='B'){
                s[i]='B';
                s[i-1]='G';
                i++;
            } 
        }
    }
    cout<<s<<"\n";
    return 0;
}