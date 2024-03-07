#include<bits/stdc++.h>
using namespace std;

/*
If n is even, the optimal distance is n and if nis odd the optimal distance is n+1
n=4 21 43
n=5 312 54
n=6 21 43 65
n=7 312 54 76
*/

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        if(n%2==0){
            for(int i=1;i<=n;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<"\n";
        }
        else{

            cout<<3<<" "<<1<<" "<<2<<" ";
             
            for(int i=4;i<=n;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<"\n";
            
        }

    }

}