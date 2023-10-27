#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={7, 2, 5, 1, 8, 4, 6, 3};
    cout<<"Before Sorting the array :"<<endl;
    for( int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    
    cout<<endl;
    for( int i=0;i<v.size();i++)
    {
        for( int j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])
            swap(v[i],v[j]);
        }
    }
    cout<<"After Sorting the array :"<<endl;    
    for( int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    return 0;
}
