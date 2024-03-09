#include<bits/stdc++.h>
using namespace std;

/*
Every candidate needs to get 1 more from the max votes to win.
(How many votes should be added) therefore -curr

If the candidate is maximum so the equation will give negative because we dont need to add
therfore we should print 0 hence max(0, )

*/

int main(){

    int t;
    cin>>t;
    while(t--){

        int a,b,c;
        cin>>a>>b>>c;

        cout<<max(0,max(b,c)-a+1)<<" "<<max(0,max(a,c)-b+1)<<" "<<max(0,max(b,a)-c+1)<<"\n";

    }

}