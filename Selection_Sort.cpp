#include<bits/stdc++.h>
using namespace std;
//it is not adaptive ,not stable.
//minimum swaps,time complexity =O(n^2)
//we get minimum value in first pass
void selectionsort(int a[],int n)
{
    int i,j,k,temp;
    for (i=0;i<n-1;i++)
    {
        j=k=i;
        while (j<n)
        {
            if(a[k]>a[j])
            k=j;
            j++;
        }
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
    
}
int main()
{
    int a[]={9,7,5,4,6,2,1},n=7;
    selectionsort(a,n);
    for (int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
    return 0;
}