#include<bits/stdc++.h>
using namespace std;

/*
Count the uppercase and lower case numbers
If uppercase is strictly greater than lowercase the convert to Upper
or else Convert to Lower
*/

int main(){

    string s;
    cin>>s;
    int up=0,lo=0;
    for(int i=0;i<s.size();i++ ){
        if(isupper(s[i])) up++;
        else lo++;
    }

    if(up>lo){
        char ch;
        for(int i=0;i<s.size();i++ ){
            ch = toupper(s[i]);
            cout<<ch;
        }
    }
    else{
        char ch;
        for(int i=0;i<s.size();i++ ){
            ch = tolower(s[i]);
            cout<<ch;
        }
    }

    return 0;
}