#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int c=0;
        for(int i=1;i<=n;i++){
            int first=i;
            int second=n;
            bool flag=true;
            for(int j=0;j<k-2;j++){
                int a=first;
                first=second-a;
                second=a;
                flag &=first<=second;
                flag &=min(first,second)>=0;
                if(!flag) {break;}
            }
            if(flag) c++;
        }
        cout<<c<<endl;
    }
}