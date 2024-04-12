#include<bits/stdc++.h>
using namespace std;

/*
Agar 1st ch ko chhodh ke koi bhi chota huya then dont change 
*/

int main(){

    string word;
    cin>>word;

    bool cond = true;

    for(int i=1;i<word.size();i++){
         if(islower(word[i])) {
            cond=false;
            break;
         }
    }

    if(cond){
        for(char ch:word){
        if(islower(ch)) ch = toupper(ch);
        else ch = tolower(ch);

        cout<<ch;
    }
    }

    else cout<<word;
    

}