#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<long long> a(n);
    for(auto &it:a) cin>>it;
    long long min_moves = 0;
    for(int i=1;i<n;++i){
        if(a[i]<a[i-1]){
            min_moves += (a[i-1] - a[i]);
            a[i] = a[i-1];
        }else{

        }
    }
    cout<<min_moves<<"\n";
    return 0;
}