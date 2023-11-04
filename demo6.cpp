#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(2);
    v.push_back(6);
    v.push_back(1);
    v.push_back(3);
    vector<int> se={1};
    auto it = find_end(v.begin(), v.end(), se.begin(), se.end());
     
}