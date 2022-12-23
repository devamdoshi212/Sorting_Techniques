#include<bits/stdc++.h>
using namespace std;
//array sorted in ascending , time complexity O(n)<t<O(n^2)
void bubblesort(int a[],int n)
{
    int flag,temp; //flag var. used for if array already sorted than break and come out
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    } 
}
int main()
{
    int a[]={1,2,3,5,4,6,9,7,8};
    int n=9;
    bubblesort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}