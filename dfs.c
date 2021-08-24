#include <stdio.h>
#include <stdlib.h>

int a[20][20], q[20], visited[20], n;

void dfs(int v)
{
  for (int i = 0; i < n; i++)
    if (a[v][i] == 1 && !visited[i])
    {
      visited[i] = 1;
      printf("[%d] ", i);
      dfs(i);
    }
}

int main()
{
  int v;

  system("cls");

  printf("Enter the number of vertices: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
    visited[i] = 0;

  printf("\nEnter graph data in matrix form:\n");
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &a[i][j]);

  printf("\nEnter the starting vertex: ");
  scanf("%d", &v);

  printf("\nDFS traversal is:\n");
  visited[v] = 1;

  printf("[%d] ", v);

  dfs(v);

  return 0;
}
