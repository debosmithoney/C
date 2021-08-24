#include <stdio.h>

int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];

  printf("Row and Column of the 1st matrix: ");
  scanf("%d%d", &m, &n);
  printf("\nElements of 1st matrix: \n");

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);

  printf("\nRow and Column of the 2nd matrix: ");
  scanf("%d%d", &p, &q);

  if (n != p)
    printf("\nThe multiplication isn't possible.\n");
  else
  {
    printf("\nElements of 2nd matrix:\n");

    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }

        multiply[c][d] = sum;
        sum = 0;
      }
    }

    printf("\nMatrix Multiplication:\n");

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d ", multiply[c][d]);

      printf("\n");
    }
  }

  return 0;
}
