#include<stdio.h>
int main()
{
    int i,j,n,a[100][100],min=0,max=0,m;
    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d",&n);
    printf("ENTER THE NUMBER OF COLUMNS : ");
    scanf("%d",&m);
    printf("ENTER THE ELEMENTS :  \n");

    printf("\nEnter the elements of the matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    min=a[0][0];
    printf("\n\n----- TRANSPOSE OF THE MATRIX -----\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("[%d]",a[i][j]);

            if(max<a[i][j])
                max=a[i][j];
            if(min>a[i][j])
                min=a[i][j];
        }
    }
    printf("\nMAXIMUM ELEMENT : %d",max);
    printf("\nMINIMUM ELEMENT : %d",min);
    return 0;
}
