#include<bits/stdc++.h>
using namespace std;

/*
Consider permutation such that pi=i [1(p1),2(p2),3(p3),4(p4)] for n=4
Obviously PPi=i
Now we have to change the condition so that Pi!=i
Change the elements Alternatively(Will not work if n is odd)
The frist two will be the same everytime
*/

int main(){

    int n;
    cin>>n;

    if(n%2 == 1) cout<<-1<<"\n";
    else{
        cout<< "2 1";
        for(int i=3;i<n;i+=2){
            cout<<" "<<i+1<<" "<<i<<"\n";
        }
    }

    return 0;
}