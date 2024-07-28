#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    st.insert(1);
    st.insert(3);
    st.emplace(2);
    st.emplace(2);
    for(auto i:st) //printing a set
        cout<<i<<" ";
    cout<<endl;
    auto it1 = st.find(1); //returns iterator to element 2
    auto it2 = st.find(6); //returns iterator to st.end()
    cout<<st.count(2)<<" "<<st.count(9)<<endl;
    st.erase(it1); //erases iterator
    for(auto i:st) //printing a set
        cout<<i<<" ";
    cout<<endl;
}