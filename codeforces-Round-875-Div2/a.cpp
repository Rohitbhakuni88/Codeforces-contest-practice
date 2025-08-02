//  logic what is logic to solution 
//  lets assume that a[4] = [] 1 , 2 , 3 ,4 ];
//  now what can be b[4] such that a1+b1<=a2+b2 and so on..
//  we can just reverse the array b to be b[4]=[ 4, 3, 2, 1];
// if a[n] = n + n-1 + n-2 ......... 1;
//  so b[n] = 1 + 2+ 3........1;
//  so a[n]+b[n]== n+1 , n+1 ,n+1 is it same for everyone;
//  so we can take it as a[n]+b[n] == n+1;
//  so b[n]=n+1-a[n]   take n=i;

// question link : https://codeforces.com/contest/1831/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    // freopen("input.txt","r",stdin); 
    // freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cout<<n+1-x<<" ";
        }
        cout<<"\n";
    }

    
}
