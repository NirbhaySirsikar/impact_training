//if A=1 B=2 C=3 ..... Z=26
//find AA, AD ABC

#include<bits/stdc++.h>
using namespace std;

int main(){
    // Alpha to number
    // string s;
    // cin>>s;
    // int ans=0;

    // for (int i = s.length()-1; i>=0; i--)
    // {
    //     ans+=pow(26,s.length()-1-i)*(s[i]-'A'+1);
    // }
    // cout<<ans;

    // number to Alpha
    int n;
    cin>>n;
    string ans;
    while(n){
        cout<<(n-1)%26<<endl;
        ans+=('A'+(n-1)%26);
        n=(n-1)/26;
    }
    ans[ans.length()]='\0';
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}
