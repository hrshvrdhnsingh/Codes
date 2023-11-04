#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> masks(n,0);
    for(int i=0;i<n;i++){
        int num;cin>>num;
        int mask=0;
        for(int j=0;j<num;j++){
            int day;cin>>day;
            mask=(mask|(1<<day));
        }
        masks[i]=mask;
    }
    int nmax=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int inter=(masks[i]&masks[j]);
            int common=__builtin_popcount(inter);
            nmax=max(common,nmax);
        }
    }
    cout<<nmax<<endl;
}