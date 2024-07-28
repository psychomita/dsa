#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> mp;
    mp.insert({5,6});
    mp.emplace(2,3);
    mp[1]=2;
    for(auto it:mp)
        cout<<it.first<<" "<<it.second<<endl;
    cout<<mp[2];
    auto it=mp.find(3);
}