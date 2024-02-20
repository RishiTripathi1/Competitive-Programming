#include<bits/stdc++.h>
using namespace std;

/*
It is important to leave all the left doors in the same position, 
and all the right doors in the same position.
Minimum number of seconds t, 
in which he is able to bring all the cupboard doors in the required position.

Left me ko min hoga vo change hoyega same for right

*/

int main(){

    int n;
    cin>>n;

    int left[10001],right[10001];

    for(int i=0;i<n;i++ ){
        cin>>left[i]>>right[i];
    }

    int lmin=0,cnt0=0,cnt1=0;
    for(int i=0;i<n;i++ ){
        if(left[i]==0) cnt0++;
        else cnt1++;
    }
    lmin=min(cnt0,cnt1);

    int rmin=0,count0=0,count1=0;
    for(int i=0;i<n;i++ ){
        if(right[i]==0) count0++;
        else count1++;
    }
    rmin=min(count0,count1);
    
    cout<<lmin+rmin<<"\n";

}