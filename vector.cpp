#include <bits/stdc++.h>
using namespace std;
/*void print(vector<int> &v){
    for(int i=0;i<4;i++)
    cout<<v[i]<<" ";
}*/
int main()
{
    vector<pair<int,int>> vp={{1,2},{2,3},{3,4}};
    for(pair<int,int> &value : vp)
       cout<<value.first<<" "<<value.second<<" ";
}