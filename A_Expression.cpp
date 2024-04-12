#include<bits/stdc++.h>
using namespace std;

/*
consider several cases and choose the best one
*/

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    int ans=a+b+c;

    ans= max(ans,(a + b) * c);
    ans= max(ans,a * (b + c));
    ans= max(ans,a*b*c);
    cout<<ans;

}