#include<bits/stdc++.h>
using namespace std;

/*
Count the number of sure and apply condition
*/

int main(){

    int n;
    cin>>n;
    int p,v,t;
    int cnt=0;
    while(n--){
        cin>>p>>v>>t;
        if(p+v+t >=2) cnt++;
    }

    cout<<cnt<<"\n";

}