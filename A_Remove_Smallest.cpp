#include<bits/stdc++.h>
using namespace std;

/*
Sort the array
Check consecutive element with difference greater than 1
*/

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        vector<int>arr(n);
        for(auto &it: arr){
            cin>>it;
        }

        sort(arr.begin(),arr.end());
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1]) >1) flag=1;
        }

        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

}