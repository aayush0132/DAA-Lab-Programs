/******************************************************************************
LINEAR SEARCH*/
#include<iostream>
using namespace std;
int main()
{
    int n,target,c,flag=0;
    cout<<"enter the limit of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the target"<<endl;
    cin>>target;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            flag=1;
            c=i;
            break;
        }
    }
    if(flag)
     cout<<"Target is found on index "<<c<<endl;
    else 
    cout<<"Target is not Found"<<endl;
    return 0;
}
