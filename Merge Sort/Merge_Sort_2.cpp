#include<bits/stdc++.h>
using namespace std;
//this mergesort function merge its own array
void mergesort(int a[],int l,int mid,int h)
{
    int i,j,k,b[l+h+1];
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
        b[k++]=a[i++];
        else
        b[k++]=a[j++];
    }
    for(;i<=mid;i++)
    b[k++]=a[i];

    for(;j<=h;j++)
    b[k++]=a[j];

    for(int f=l;f<=h;f++)
    a[f]=b[f];
}
int main()
{
    int a[]={2,5,7,11,3,6,9,12},n=8;
    mergesort(a,0,(n/2)-1,n-1);

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}