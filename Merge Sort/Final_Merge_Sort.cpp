#include<bits/stdc++.h>
using namespace std;

void mergesort(int a[],int l,int mid,int h) //this function taken from Merge_Sort_2.cpp
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
void IMergeSort(int a[],int n)//By iterative method
{
    int i,p,l,h,mid;

    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p-1<n;i=i+p)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            mergesort(a,l,mid,h);
        }
    }
    if(p/2<n)
        mergesort(a,0,(p/2)-1,n-1);
}
void RMergeSort(int a[],int l,int h)//By recursive method
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        RMergeSort(a,l,mid);
        RMergeSort(a,mid+1,h);
        mergesort(a,l,mid,h);
    }
}
int main()
{
    int a[]={11,13,7,12,16,9,24,5,10,3},n=10,i;
    RMergeSort(a,0,n-1);

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}