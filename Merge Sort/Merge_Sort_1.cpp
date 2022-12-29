#include<bits/stdc++.h>
using namespace std;
//This merge sort function merge 2 array which is already sorted (two way sorting) 
void mergesort(int a[],int b[],int m,int n)
{
    int i,j,k;
    int c[m+n];
    i=j=k=0;
    while (i<m && j<n)
    {
        if(a[i]>b[j])
        c[k++]=b[j++];
        else
        c[k++]=a[i++];
    }
    for (;i<m;i++)
    {
        c[k++]=a[i];
    }
    for (;j<n;j++)
    {
        c[k++]=b[j];
    }

    for(int i=0;i<(m+n);i++)
    cout<<c[i]<<" ";
}
int main()
{
    int a[]={1,3,5,9};
    int b[]={2,6,8,12};
    mergesort(a,b,4,4);
    return 0;
}