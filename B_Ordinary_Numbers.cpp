#include<bits/stdc++.h>
using namespace std;

/*
0-9 = 9 (n)
10-99 = +9
100-999 = +9 ....

Check number of digit till the most significant digit for checking how many +9
Check if the MS digit ka number > orignal number, To vo nahi geena jayega 
isiliye +(MS digit-1)
Else +MS digit

Example= 520 
         +9 +9
         555>520  isiliye for last range(100-999) we will add +4 (111,222,333,444)


*/

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int cnt=0;

        if(n<10) cout<<n<<"\n";
        else{
            int og = n;
            while(n>9){
                n/=10;
                cnt++;
            }

            int num=0;
            for(int i=0;i<=cnt;i++){
                num+= n*pow(10,i);
            }

            if(og<num) cout<<cnt*9+(n-1)<<"\n";
            else cout<<cnt*9+n<<"\n";
        }
    }

}