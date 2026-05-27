#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    long long tSum = (n*(n+1))/2;
    long long cSum = 0;
    for(int i=0;i<n-1;++i){
        int val;
        cin>>val;
        cSum += val;
    }
    cout<<tSum - cSum<<"\n";
    return 0;
}