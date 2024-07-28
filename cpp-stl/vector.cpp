#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(4); //faster than push_back
    vector<int> v2(v1); //copying 1 vector into another
    vector<int>::iterator it = v1.begin(); //iterator: stores pointer to memory location where element is stored
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;
    cout<<v2[0]<<" "<<v2.at(1)<<endl;
    cout<<v1.back()<<endl;
    for(int i=1;i<=4;i++)
        v1.emplace_back(i);
    for(auto it:v1) //printing a vector
        cout<<it<<" ";
    cout<<endl;
    v1.erase(v1.begin(),v1.begin()+2); //erasing elements from a vector [start,end]
    for(auto it:v1) 
        cout<<it<<" ";
    cout<<endl;
    v1.insert(v1.end(),3,6); //inserting elements into a vector
    for(auto it:v1) 
        cout<<it<<" ";
    cout<<endl;
    vector<int> v3(2,5);
    v1.insert(v1.begin(),v3.begin(),v3.end()); //inserting vector into a vector
    for(auto it:v1) 
        cout<<it<<" ";
    cout<<endl<<v1.size()<<endl;
}