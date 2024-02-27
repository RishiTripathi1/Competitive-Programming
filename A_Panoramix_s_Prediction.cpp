#include<bits/stdc++.h>
using namespace std;

/*
Find given number ke baad ka prime and compare
*/

bool prime(int n){
    if (n == 0 || n == 1) return false;
    if(n==2) return true;
    for(int i=2;i<n;i++ ){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){

    int n,m;
    cin>>n>>m;
    int ans;

    for(int i=n+1;;i++){
        if(prime(i)){
            ans=i;
            break;
        }
    }

    if(ans==m) cout<<"YES";
    else cout<<"NO";

}