#include <stdio.h>
#include <stdlib.h>

  void heapify(int arr[], int n, int i)
  {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
      largest = left;

    if (right < n && arr[right] > arr[largest])
      largest = right;

    if (largest != i) {
      int temp = arr[i];
      arr[i] = arr[largest];
      arr[largest] = temp;
      heapify(arr, n, largest);
    }
  }


  void heapSort(int arr[], int n)
  {
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      int temp = arr[0];
      arr[0] = arr[i];
      arr[i] = temp;
      heapify(arr, i, 0);
    }
  }


  int main()
  {
      int n,i, arr[100], ch;
      while (1){
        printf("Enter the number of Elements: ");
        scanf("%d",&n);
        printf("Enter %d integers\n", n);
        for (i = 0; i < n; i++)
          scanf("%d", &arr[i]);
        heapSort(arr, n);
        printf("Sorted array is \n");
        for (int i = 0; i < n; ++i)
          printf("%d ", arr[i]);
        printf("\n");
        printf("\n1 to Continue / 0 to Exit\n");
        scanf("%d",&ch);
        if(ch==0)
        break;
      }

  }
