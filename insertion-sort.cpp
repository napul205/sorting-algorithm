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
    
    for( int i=1;i<v.size();i++)
    {
        int t=v[i];
        int j=i-1;
        
        while(j>=0 && t<v[j])
        {
            v[j+1]=v[j];
            j--;
        }
        
        v[j+1]=t;
    }
    cout<<"After Sorting The Array :"<<endl;;
    for( int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    
    cout<<endl;

    return 0;
}
