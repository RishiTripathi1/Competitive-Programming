#include<bits/stdc++.h>
using namespace std;

/*
Calculate in tram for everystep.
(-exit +enter) and find maximum capacity
*/

int main(){

    int n;
    cin>>n;
    int in=0;
    int ans=0;

    while(n--){
        int ex,e;
        cin>>ex>>e;
        in=in-ex+e;
        ans=max(ans,in);
    }

    cout<<ans;

}