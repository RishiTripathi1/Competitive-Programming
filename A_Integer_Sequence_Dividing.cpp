#include<bits/stdc++.h>
using namespace std;

/*
Observation
Brute force
Answers repeat itself after 4 cases
*/

int main(){

    int n;
    cin>>n;

    int ans=n%4;

    if(ans==0 || ans==3) cout<<0<<"\n";
    else if(ans==1||ans==2) cout<<1<<"\n";

    return 0;

}