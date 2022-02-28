//SEARCHING MAX AND MIN elements    
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the limit of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min)
        min=a[i];
        if(a[i]>max)
        max=a[i];
    }
    cout<<"MAX="<<max<<endl;
    cout<<"MIN="<<min<<endl;
    return 0;
}