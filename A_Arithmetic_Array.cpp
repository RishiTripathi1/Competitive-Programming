#include<bits/stdc++.h>
using namespace std;

/*

*/

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        float sum=0;
        int num=0;
        for(int i=0;i<n;i++){
            cin>>num;
            sum+=num;
        }

        float ans=sum/n;
 
        if(ans<1.0) cout<<1<<"\n";
        else cout<<sum-n<<"\n";

    }

}