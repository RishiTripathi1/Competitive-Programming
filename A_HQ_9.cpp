#include<bits/stdc++.h>
using namespace std;

/*
String me traverse karo agar kuch bhi mil jata hai to return kardo
*/

int main(){

    string s;
    cin>>s;

    for(char ch:s){
        if(ch=='H'||ch=='Q'||ch=='9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}