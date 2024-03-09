#include<bits/stdc++.h>
using namespace std;

/*
Concatinate b string on a and sort
sort the final string and compare
*/

int main(){

        string a,b;
        cin>>a>>b;
        a+=b;
        sort(a.begin(),a.end());
        string c;
        cin>>c;
        sort(c.begin(),c.end());
        cout<< (a==c?"YES":"NO");

}