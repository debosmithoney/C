#include <stdio.h>
int main()
{
    int n,i,j,arr[100],search,flag=0,ini=0,inj=0;
    printf("Enter the Size: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for (i = 0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the Sum of Pair: ");
    scanf("%d",&search);

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if ((arr[i]+arr[j])==search)
                flag=1;
                ini=arr[i];
                inj=arr[j];
                break;
        }
    }

    if (flag==1)
        printf("\nPair Found(%d,%d)\n",ini,inj);
    else
        printf("\nPair Not Found\n");
}
