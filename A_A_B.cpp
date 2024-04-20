#include<bits/stdc++.h>
using namespace std;

/*
 Take the first and the last characters of the input string, 
 calculate their ASCII codes,
  and then subtract the ASCII code of the character 0 from them 
  to get these digits as integers, not as characters.
  Then just add
*/

int main(){

    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        
        int a = toascii(s[0])-48;
        int b = toascii(s[2])-48;
        cout<<a+b<<endl;

    }

}