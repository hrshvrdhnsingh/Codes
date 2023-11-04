#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int arr[n];arr[0]=x;arr[n-1]=y;
        int no,flag=0;
        int d=1;
        for(int i=n-2;i>0;i--){
            arr[i]=arr[i+1]-d++;
        }
        for(int i=0;i<n-2;i++){
            int a=arr[i+1]-arr[i];
            int b=arr[i+2]-arr[i+1];
            if(a<=b) flag=1;
        }
        if(flag==1) cout<<-1<<endl;
        else{
            for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
}