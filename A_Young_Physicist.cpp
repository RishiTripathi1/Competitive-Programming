#include<bits/stdc++.h>
using namespace std;

/*
Σxi=0,Σyi=0 Σzi=0 
*/

int main(){
    int n;
    cin>>n;

    int x,y,z;
    int xs=0,ys=0,zs=0;

    while(n--){
        cin>>x>>y>>z;
        xs+=x;
        ys+=y;
        zs+=z;
    }

    if(xs==0&&ys==0&&zs==0) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

}