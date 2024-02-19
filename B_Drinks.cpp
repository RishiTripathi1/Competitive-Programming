#include<bits/stdc++.h>
using namespace std;

/*
Har drink me kitna % orange hai(diya huya hai input2)
Kitne drink hai (input 1)

Total % in final drink = avg of the %'s
*/

int main(){
    int n,a[110];
    cin>>n;
    double ans=0.0,sum=0.0;
    for(int i=0;i<n;i++ ){
        cin>>a[i];
        sum+=a[i];
    }
    ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<"\n";
    return 0;
}   