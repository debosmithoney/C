#include <stdio.h>

int partition(int array[], int low, int high) {
  int temp;
  int pivot = array[high];

  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      temp = array[i];
      array[i] = array[j];
      array[j] = temp;
    }
  }

  temp = array[i+1];
  array[i+1] = array[high];
  array[high] = temp;

  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {

    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

int main() {
  int i , n, array[100];
  printf("Number of Elements: ");
  scanf("%d",&n);
  printf("Enter elements: ");
  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }

  printf("Unsorted Array\n");
  for (int i = 0; i < n; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
  quickSort(array, 0, n - 1);
  printf("Sorted array in ascending order: \n");
  for (int i = 0; i < n; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
