#include<bits/stdc++.h>
using namespace std;

/*
Iterate over all integers, if the number is not liked then skip.
Else Decrement the variable and check if its equal to 0
*/

int main(){

    int t;
    cin>>t;
    while(t--){

    int k;
    cin>>k;

        for(int i=1;;i++ ){
        if(i%3==0 || i%10==3) continue;
        else{
            --k;
            if(k==0){
                cout<<i<<"\n";
                break;
            }
        }
    }
}
    

}