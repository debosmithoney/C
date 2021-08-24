#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define size 32

void insertionSort(int arr[], int n)
{
    int k;

    for (int i = 1; i < n; i++)
    {
        k = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }

    printf("\nArray is now Sorted\n");
}

int main()
{
    do
    {
        int arr[size], n;

        system("cls");

        printf("Enter number of elements: ");
        scanf("%d", &n);

        printf("\nEnter the elements:\n");
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        insertionSort(arr, n);

        printf("\nArray elements: ");
        for (int i = 0; i < n; i++)
            printf("[%d] ", arr[i]);

        printf("\nPress and key to repeat or Press ESC to exit....");
    } while (getch() != 27);

    system("cls");

    return 0;
}
