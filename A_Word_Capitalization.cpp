#include<bits/stdc++.h>
using namespace std;

/*
Capitalize the first char and print the rest as it is
*/

int main(){

    string s;
    cin>>s;

    char ch = toupper(s[0]);
    cout<<ch;

    for(int i=1;i<s.size();i++ ){
        cout<<s[i];
    }

}