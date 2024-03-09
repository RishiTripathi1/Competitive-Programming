#include<bits/stdc++.h>
using namespace std;

/*
Odd+even=odd (in a pair) therefore evey pair must contains 1even and 1odd
That means no. of odd should be n
*/

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        int cnt=0;
        for(int i=1;i<=2*n;i++){
           int num;
           cin>>num;
           if(num%2==1) cnt++;
        }

        if(cnt==n) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";

    }

}