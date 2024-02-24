#include<bits/stdc++.h>
using namespace std;

/*
Arr me 1 hona zaruri hai, next element 3 hoga kyuki sum max karna hai min size me
(ai-2 should exist issiliye next maxele = 3)

The maximum sum we can construct with n elements is 1+3+5+7+⋯+2n−1=n^2
=> n=sqrt(s) minimum number of elements
(so we need atleat sqrt(s) elements to construct sum S)

Isilliye jab tak sum bada nahi hojata tabtak element++

*/

int maxsum(int x){
    return pow(x,2);
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;

        int n=1;

        while(maxsum(n) < s){
            n++;
        }

        cout<<n<<"\n";
    }

}