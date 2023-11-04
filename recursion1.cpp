#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> valid;
void generate(vector<char> &v,int i,string &s)
{
    if(i==s.length()) {valid.push_back(v); return;}
    generate(v,i+1,s);
    v.push_back(s[i]);
    generate(v,i+1,s);
    v.pop_back();
}
int main()
{
    cout<<"Enter String: ";
    string s; cin>>s;
    vector<char> ch;
    generate(ch,0,s);
    for(auto &value: valid){
       for(auto &ele: value){
           cout<<ele;
       }
       cout<<endl;
    }
}