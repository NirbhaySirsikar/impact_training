// given length and breadth of a rect and a square A find a minimum number of squares that covers the entire rect.
// NOTE: dont break the square

#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,b,s;
    cin>>l>>b>>s;
    int ansl=l/s;
    l%s?ansl++:ansl;
    int ansb=b/s;
    b%s?ansb++:ansb;
    cout<<ansl*ansb;
    return 0;
}