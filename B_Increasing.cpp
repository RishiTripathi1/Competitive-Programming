#include<bits/stdc++.h>
using namespace std;

/*
If there are two elements with the same value, then the answer is NO, 
because neither of these values is less than the other.
Otherwise, the answer is YES, since we can just sort the array.
*/

void solve()
{
    int n;
    cin >> n;
    int x[n];
    set<int> a;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a.find(x[i]) != a.end())
        {
            cout << "NO" << endl;
            return;
        }
        a.insert(x[i]);
    }
    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}