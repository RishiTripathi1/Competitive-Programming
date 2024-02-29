#include<bits/stdc++.h>
using namespace std;

/*
 A coder's first contest isn't considered amazing. 
 Issiliye jab first time min and max update hoyenge hume consider nahi karna hai
 Therefore -2cnt  
*/

int main(){

    int n;
    cin>>n;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int cnt=0;
    while(n--){
        int c;
        cin>>c;
        if(c>maxi){
            maxi=c;
            cnt++;
        }
        if(c<mini){
            mini=c;
            cnt++;
        }

    }

    cout<<cnt-2;

}