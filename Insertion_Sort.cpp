#include<bits/stdc++.h>
using namespace std;
//array sorted in ascending , time complexity O(n)<t<O(n^2)
//we don't need flag variable bcoz it is by default adaptive
void insertionsort(int a[],int n)
{
    int x,j;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        x=a[i];
        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}
int main()
{
    int a[]={10,8,6,5,3,1};
    int n=6;
    insertionsort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}