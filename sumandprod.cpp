#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
int search(int arr[],int l,int h,int src)
{
    if(l>h) return 0;
    else{
        int mid=(l+h)/2;
        if(arr[mid]==src) return 1;
        else if(arr[mid]>src)
           search(arr,l,mid-1,src);
        else if(arr[mid]<src)
           search(arr,mid+1,h,src);
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
      int n,i,j,k;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
      int q;
      cin>>q;
      pair<int,ll> p[q];
      for(i=0;i<q;i++){
      cin>>p[i].first>>p[i].second;}
      for(i=0;i<q;i++){int c1=0;
        for(j=0;j<n-1;j++){
          for(k=i+1;k<n;k++){
            if(p[i].first-a[j]==p[i].second/a[j]){
              int c=search(a,j,n,p[i].first-a[j]);
              if(c==1)
              c1++;
            }
          }
        }
        cout<<c1<<" ";
      }
      cout<<"\n";
    }
}


          