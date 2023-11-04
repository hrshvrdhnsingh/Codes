#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <string,int> m;
    m["abc"]=1;
    m["cde"]=2;
    m["def"]=3;
    m["abc"]+=9999;
    //(auto &pr:m)
    //cout<<pr.first<<" "<<pr.second<<" ";
    auto it=m.find("abc");
    cout<<(*it)<<endl;
}