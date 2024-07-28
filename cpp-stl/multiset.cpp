#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> m;
    for(int i=1;i<=5;i++)
        m.insert(1);
    for(auto i:m) //printing a multiset
        cout<<i<<" ";
    cout<<endl;
    cout<<m.count(1)<<endl;
    m.erase(m.find(1)); //erases single 1 only
    m.erase(1); //erases all 1s
    for(auto i:m) 
        cout<<i<<" ";
    cout<<endl;
}