#include<bits/stdc++.h>
using namespace std;

/*
Check string a and b and change a[i]
*/

int main(){

    string a,b;
    cin>>a>>b;

    for(int i=0;i<a.size();i++ ){
        if(a[i]!=b[i]) a[i]='1';
        else a[i]='0';
    }
    cout<<a;

}