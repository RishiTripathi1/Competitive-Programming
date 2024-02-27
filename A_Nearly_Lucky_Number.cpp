#include<bits/stdc++.h>
using namespace std;

/*
Count number of 4 and 7 in the number
If count==4/7 the it is nearly lucky
*/

int main(){

    long long int n;
    cin>>n;
    long long int cnt=0;
    while(n){
        int digit  = n%10;
        if(digit==4||digit==7) cnt++;
        n=n/10;
    }
    if(cnt==4||cnt==7) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}