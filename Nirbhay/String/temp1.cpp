// Given a string determine whether it is palindrome or not
// While checking for palindrome you have to ignore space special char and the Case
#include <bits/stdc++.h>
using namespace std;

bool specialPalindrome(string s){
    int n=s.length();
    int i=0,j=n-1;
    while (i<j)
    {
        if(s[i]==' ' || s[i]=='.' || s[i]==',' || s[i]=='!' || s[i]=='?' || s[i]=='\'' || s[i]=='\"'){
            i++;
            continue;
        }
        if(s[j]==' ' || s[j]=='.' || s[j]==',' || s[j]=='!' || s[j]=='?' || s[j]=='\'' || s[j]=='\"'){
            j--;
            continue;
        }
        if(s[i]!=s[j] && s[i]!=s[j]+'A' && s[i]!=s[j]-'A'){
            return false;
        }
        i++;
        j--;       
    }
    return true;
    
}

int main()
{
    string s;
    cin >> s;
    cout<<specialPalindrome(s);
    return 0;
}