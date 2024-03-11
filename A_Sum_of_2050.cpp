#include<bits/stdc++.h>
using namespace std;

/*
First, we need to check whether nis the multiple of 2050 .If n is not the multiple of 2050,
the answer is always −1

Then we can divide n by 2050 the problem now is how to represent n as the sum of powers of 
10, So the answer is the sum of its digits in decimal representation.
*/

int main(){

    int t;
    cin>>t;
    while(t--){

        long long n;
        cin>>n;

        if(n%2050){
            cout<<-1<<"\n";
            continue;
        } 
        

        n = n/2050;
        long long ans=0;
        while(n){
            ans+=n%10;
            n/=10;
        }

        cout<<ans<<"\n";
    }

}