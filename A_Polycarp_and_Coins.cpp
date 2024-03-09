#include<bits/stdc++.h>
using namespace std;

/*
1:2 value   Difference minimum
Initialize c1 and c2 with n/3, then gather the remaining n by consition for n%3
Agar n%3=0 to fir perfectly divided iska matlab difference=0
Agar n%3=1 to fir ek bachega isiliye c1+ to difference=1
Agar n%3=2 to fir do bachenge isiliye c2+ kyuki difference=1 min rakhna hai
*/

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        int c1=n/3;
        int c2=n/3;

        if(n%3==1) c1++;
        else if(n%3==2) c2++;

        cout<<c1<<" "<<c2<<"\n";

    }

}