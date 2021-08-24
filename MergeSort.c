#include <stdio.h>
#include<stdlib.h>

void Merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[100];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    for(;i<=mid;i++)
        B[k++]=A[i];
    for(;j<=h;j++)
        B[k++]=A[j];
    for(i=l;i<=h;i++)
        A[i]=B[i];
}
void MergeSort(int A[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;

        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
}

int n;
int main()
{
    int arr[30],l,r,i;

    void quick_sort(int arr[],int,int);

    printf("Enter Number of Elements:  ");
    scanf(" %d",&n);

    printf("\nEnter Elements : ",n);
    for(i=0;i<n;i++)
    scanf(" %d",&arr[i]);
    MergeSort(arr,0,n-1);

    printf("\nMerge Sorted Array : ");

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}
