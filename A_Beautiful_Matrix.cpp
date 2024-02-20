#include<bits/stdc++.h>
using namespace std;

/*
If the single 1 is located on the intersection of the r-th row and the c-th column 
(1-based numeration), then the answer is |3 - r| + |3 - c|.
*/

int main(){

    int n;
    for(int i=1;i<6;i++ ){
        for(int j=1;j<6;j++ ){
            cin>>n;

            if(n==1) cout<<abs(3-i)+abs(3-j)<<"\n";
        }
    }
    return 0;
}