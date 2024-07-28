#include<iostream>
using namespace std;

int main()
{
    pair<int,int> p = {1,4};
    pair<pair<int,int>,int> q = {p,8};
    cout<<"1st Pair 1st Element: "<<p.first<<endl<<"1st Pair 2nd Element: "<<p.second<<endl;
    cout<<"2nd Pair 1st Element: "<<q.first.first<<endl<<"2nd Pair 2nd Element: "<<q.first.second<<endl<<"2nd Pair 3rd Element: "<<q.second<<endl;
    pair<int,int> arr[] ={{1,2},{3,4},{5,6}};
    cout<<"Array Element: "<<arr[2].first<<endl;
    return 0;
}