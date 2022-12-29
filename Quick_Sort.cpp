#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int k)
{
    int i=l,j=k,temp;
    int pivot = a[l];
    i++;
    do
    {
        while(a[i] <= pivot && i<j)
        {
            i++;
        }
        while(a[j] > pivot && i<=j)
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    temp=a[l];
    a[l]=a[j];
    a[j]=temp;
    return j;
}
void quicksort(int arr[], int l, int k)
{
    int j;
    if(l<k)
    {
        j = partition(arr,l,k);
        quicksort(arr, l, j-1);
        quicksort(arr, j+1,k);
    }
}
int main()
{
    int a[]={5,4,3,2,1},n=5;
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}