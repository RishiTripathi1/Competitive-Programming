#include<bits/stdc++.h>
using namespace std;

/*
Increase year and check if different digit
*/

int main(){

    int x;
    cin>>x;

    while(true){
        x+=1;
        int fd = x/1000;
        int sd = x/100 %10;
        int td = x/10 %10;
        int fourthdigit = x%10;

        if(fd!=sd && sd!= td && td!=fourthdigit && fd!=td && fd!=fourthdigit && sd!=fourthdigit){
            break;
        }
    }

    cout<<x<<"\n";

    return 0;

}