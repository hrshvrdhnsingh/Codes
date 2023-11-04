#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n; int arr[n];
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;cin>>arr[i];
            if(i==0) v.push_back(arr[i]);
            else {
                if(arr[i]<arr[i-1]){
                    v.push_back(1);v.push_back(arr[i]);
                }
                else v.push_back(arr[i]);
            }
        }
        cout<<v.size()<<endl;
        for(auto &value:v) cout<<value<<" ";
    }
}