#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int ans = 0;
    while (n)
    {
        // ans+=n%2;
        // n/=2;
        ans+=n&1;
        n=n>>1;
    }
    cout<<ans<<endl;
    return 0;
}