#include<bits/stdc++.h>
using namespace std;

/*
Input lete time check karo ki 'B' hai ki nahi
'B' ke liye check karo
3 case:  same r and c = 0 (kyuki khudhi element hai)
         same row ya same col = 1(1 step me change hojayega)
         agar nahi hai = -1
         varna 2 step me saare black hojayenge (kyki 1B se pura row and col cover)

Minimum isiliye kyuki 'B' change hoyega to ans bhi badhega 
*/

int main(){

    int t;
    cin>>t;
    while(t--){

        int n,m,r,c;
        cin>>n>>m>>r>>c;
        int ans=3;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++ ){
                char ch;
                cin>>ch;
                if(ch=='B'){
                    if(i==r && j==c) ans=min(ans,0);
                    else if(i==r || j==c) ans=min(ans,1);
                    else ans=min(ans,2);
                }
            }
        }

        if(ans==3) cout<<-1<<"\n";
        else cout<<ans<<"\n";

    }

}