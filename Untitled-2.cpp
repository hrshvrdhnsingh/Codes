#include <bits/stdc++.h> 
using namespace std;
#define all(a) (a).begin(),(a).end()
int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> min,max;
    for(int i=1;i<=l-1;i++) min.push_back(pow(2,i));
    for(int i=0;i<n-l+1;i++) min.push_back(1);
    cout<<accumulate(all(min),0);

}