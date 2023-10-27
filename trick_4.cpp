#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int dif = a^b;
    int ans = 0;
    while (dif<0)
    {
        ans+=dif&1;
        dif>>=1;
    }
    cout<<ans<<endl;
    return 0;
}