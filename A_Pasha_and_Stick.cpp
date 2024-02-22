#include<bits/stdc++.h>
using namespace std;

/*

Rectangle hona chahiye Square nahi
2(x+y)=L [iska maatlab length odd nahi ho sakti]

Now figure for L/2(Cases)

if n/2=odd: 10/2 = 5 :  (0,5)   X 
                        (1,4)   -
                        (2,3)   -
                        (3,2)   -
                        (4,1)   -
                        (5,0)   X

Ways = either[(1,4) , (4,1)] + either[(2,3) , (3,2)] ======= 2Ways ======= 5/2


if n/2=even: 8/2 = 4 :  (0,4)   X 
                        (1,3)   -
                        (2,2)   X (Square banjayega)
                        (3,1)   -
                        (4,0)   X

Ways = either[(1,3) , (3,1)] ======= 1Ways ======= 4/2 - 1

*/

int main(){

    int n;
    cin>>n;

    if(n%2){
        cout<<0;
        return 0;
    }

    n/=2;

    if(n%2) cout<<n/2;
    else cout<<n/2-1;

    return 0;

}