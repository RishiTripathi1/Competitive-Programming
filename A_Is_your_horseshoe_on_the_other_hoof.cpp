#include<bits/stdc++.h>
using namespace std;

/*
Use set because no repeated value can be stored.
So after all inputs only didtinct value in set
Therefore ans=n-size;
*/

int main(){

    set<int>s;
    int n=4;
    int k;

    while(n--){
        cin>>k;
        s.insert(k);
    }

    cout<<4-s.size();

}