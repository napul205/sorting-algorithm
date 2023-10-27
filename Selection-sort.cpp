/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int find_small(vector<int> &v,int s)
{
    int h=INT_MAX,ind;
    
    for( int i=s;i<v.size();i++)
    {
        if(v[i]<h)
        {
            h=v[i];
            ind=i;
        }
    }
    
    return ind;
    
}
int main()
{
    vector<int> v={7, 2, 5, 1, 8, 4, 6, 3};
    cout<<"Before Sorting the array :"<<endl;
    for( int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    
    cout<<endl;
    for( int i=0;i<v.size();i++)
    {
        int j=find_small(v,i);
        
          
            swap(v[i],v[j]);
        
    }
    cout<<"After Sorting the array :"<<endl;    
    for( int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    return 0;
}
