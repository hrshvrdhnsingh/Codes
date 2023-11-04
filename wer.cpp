#include <bits/stdc++.h>
using namespace std;
#define ll long long
int binSearch(int arr[],int l,int h,int src)
{

    int mid=(l+h)/2;
    if(arr[mid]==src) return 1;
    else if(arr[mid]>src) binSearch(arr,l,mid-1,src);
    else if(arr[mid]<src) binSearch(arr,mid+1,h,src);

    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int q; cin>>q;
        pair<int,ll> p[200005];
        for(int k=1;k<=q;k++){
            int c=0;
            cin>>p[k].first;
            cin>>p[k].second;
            for(int i=0;i<n-1;i++){
                if(p[k].first-a[i]==p[k].second/a[i] && binSearch(a,i+1,n-1,p[k].first-a[i])==1)
                    c++;
            }
            cout<<c<<" ";
        }    
    }
        cout<<"\n";
}
