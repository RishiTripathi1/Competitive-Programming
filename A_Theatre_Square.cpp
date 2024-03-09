#include<bits/stdc++.h>
using namespace std;

/*
Kitne a chahiye m or n cover karne ke liye
m=6 a=4  6 cover karne ke liye (2) 4 chahiye
n=5 a=4  5 cover karne ke liye (2) 4 chahiye
Extra allowed hai isiliye celing
*/

int main(){

    int n,m,a;
    cin>>n>>m>>a;
    long long value=ceil((double)n/a) * ceil((double)m/a);
    cout<<value;

}