#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n; string s;
    cin>>n>>s;
    int x=0,y=0,c=0; bool flag;
    for(int i=0;i<n;i++){
      if(i==0 && s[i]=='U') flag=true;
      else if(i==0 && s[i]=='R') flag=false;
      else{
        if(s[i]=='U') y++;
        else x++;
        
        if(x>y && flag==true)
        {c++; flag=false;}
        else if(x<y && flag==false)
        {c++;flag=true;}
      }      
    }
    cout<<c<<endl;
}
int main()
{
    int testCase=1;
    solve();   
    return 0;
}