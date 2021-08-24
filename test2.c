#include <stdio.h>
void towers(int num, char f, char t, char a)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", f, t);
        return;
    }
    towers(num - 1, f, a, t);
    printf("\n Move disk %d from peg %c to peg %c", num, f, t);
    towers(num - 1, a, t, f);
}

int main()
{
    int num, ch;
    while(1){
        printf("Number of disks : ");
        scanf("%d", &num);
        printf("The sequence of moves are :\n");
        towers(num, 'A', 'C', 'B');
        printf("\n1 to Continue / 0 to Exit\n");
        scanf("%d",&ch);
        if(ch==0)
        break;
    }
     return 0;
}
