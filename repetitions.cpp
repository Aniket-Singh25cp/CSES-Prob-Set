#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int max_freq = 1;
    int curr_freq = 1;
    for(size_t i=0;i+1<s.size();){
        if(s[i]==s[i+1]){
            curr_freq++;
            max_freq = max(max_freq,curr_freq);
            ++i;
        }else{
            curr_freq = 1;
            ++i;
        }
    }
    cout<<max_freq<<"\n";
    return 0;
}