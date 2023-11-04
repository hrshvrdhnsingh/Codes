#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    for(int i=10;i>=0;--i)
    cout<<((n>>i)&1);
    cout<<endl;
}
int main()
{
    /*int n;cin>>n;
    //int i;cin>>i;
    cout<<__builtin_popcount(n);*/
    //Case change
    cout<<(char)('C'|' ')<<endl;
    cout<<(char)('c'&'_')<<endl;
}