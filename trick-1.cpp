#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;cin>>a;
        ans= ans^a;
        // cout<<ans<<endl;
    }
      cout<<ans<<endl;
    return 0;
}