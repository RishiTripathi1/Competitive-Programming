#include<bits/stdc++.h>
using namespace std;

/*
Consecutive hatane hai
Saare stones ke liye check karenge (1,n) [consecutive isiliye <n]
Agar lagataar same hai stones to fir baad wale ko hata sakte hai 
*/

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;

    int r=0,g=0,b=0;

    for(int i=1;i<n;i++ ){
        if(s[i-1]==s[i]){
            if(s[i]==r) r++;
            else if(s[i]==g) g++;
            else b++;
        }
    }

    cout<<r+g+b;
    return 0;

}