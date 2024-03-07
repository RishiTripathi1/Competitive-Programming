#include<bits/stdc++.h>
using namespace std;

/*
For every number but numbers ending with 9 will have the property:
S(num+1)=S(num)+1 kyuki last digit is increasing by 1

but for the numbers ending with 9:
S(num+1)<S(num) kyuki last digit will become 0

So we have to count  how many numbers end with 9 in the range [1,n]
1-10=1
1-20=2
ans so on
Therefore (n+1)/10
*/

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        cout<<(n+1)/10<<"\n";
    }
    
}