#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct customer
{
    float amt;
    char name[100];
    char mob[15];
} c[50];

int main()
{
    int i, ch=1, n, cnt = 0;
    char Sname[100],mob1[15];
    printf("Enter the no. of Customers: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter customer[%d] name: ", i + 1);
        scanf("%s", c[i].name);
        printf("Enter customer[%d] mob: ", i + 1);
        scanf("%s", c[i].mob);
        printf("Enter customer[%d] Purchase Amount: ", i + 1);
        scanf("%f", &c[i].amt);
    }
    while (ch != 0)
    {
        printf("\nEnter one of the Choices:\n   1 for Searching customers based on Name (two customers may have same name)\n   2 for Searching customers based on Mobile number\n   3 for Finding the the frequency of customers whose Purchase amount lies between 5000 to 9000\n   4 for Printing all the Non Prime Customers\nYour Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            break;
        case 1:
            printf("\nEnter the reqd. name:");
            scanf("%s", Sname);
            for (i = 0; i < n; i++)
            {
                if (strcmp(Sname, c[i].name) == 0)
                {
                    printf("Name: %s\n", c[i].name);
                    printf("Mob: %s\n", c[i].mob);
                    printf("Purchase Amount: %f\n", c[i].amt);
                }
            }

            break;
        case 2:

            printf("\nEnter the reqd. mobile no.:");
            scanf("%s", mob1);
            for (i = 0; i < n; i++)
            {
                if (strcmp(mob1, c[i].mob) == 0)
                {
                    printf("Name: %s\n", c[i].name);
                    printf("Mob: %s\n", c[i].mob);
                    printf("Purchase Amount: %f\n", c[i].amt);
                }
            }
            break;
        case 3:

            for (i = 0; i < n; i++)
            {
                if (c[i].amt > 5000 && c[i].amt < 9000)
                    cnt++;
            }
            printf("\nFrequency of prime customers: %d\n", cnt);
            break;
        case 4:
            printf("\nNon prime Customers:- \n");
            for (i = 0; i < n; i++)
            {
                if (c[i].amt < 5000 || c[i].amt > 9000)
                {
                    printf("Name: %s\n", c[i].name);
                    printf("Mob: %s\n", c[i].mob);
                    printf("Purchase Amount: %f\n", c[i].amt);
                }
            }
            break;

        default:
            printf("Invalid Choice!!or To Exit Enter 0");
            break;
        }
    }
    return 0;
}
