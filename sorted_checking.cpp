#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter array size";
    cin>>n;
    int a[n];
    cout<<"Enter array elements.";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<(n-1);i++)
    {
        if(a[i]>a[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Arrays are not sorted.";
    }
    else{
        cout<<"Arrays are sorted.";
    }
}