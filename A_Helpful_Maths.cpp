#include<bits/stdc++.h>
using namespace std;

/*

*/

int main(){

    string s;
    cin>>s;

    int cnt1=0,cnt2=0,cnt3=0;

    for(char ch : s){
        if(ch=='1') cnt1++;
        else if(ch=='2') cnt2++;
        else if(ch=='3') cnt3++;
    }

    string ans="";
    for(int i=0;i<cnt1;i++){
        ans += "1+";
    }
    for(int i=0;i<cnt2;i++){
        ans += "2+";
    }
    for(int i=0;i<cnt3;i++){
        ans += "3+";
    }

    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i];
    }

    

}