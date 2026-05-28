#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    int zeroes = 0;
    while(n>=5){
        n = floor(n/5);
        zeroes += n;
    }
    cout<<zeroes<<"\n";
    return 0;
}