#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int detect = n & 1;
    detect == 0?cout<<"Even":cout<<"Odd";
    return 0;
}