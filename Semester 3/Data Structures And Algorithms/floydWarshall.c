#include<stdio.h>

void allSourceShortestPath(int n, int Graph[][10], int Dist[][10])
{
  for(int k = 0; k < n; k++)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (Dist[i][k] + Dist[k][j] < Dist[i][j])
        {
          Dist[i][j] = Dist[i][k] + Dist[k][j];
        }
      }
    }
  }
}

int main(void)
{
  int n;
  printf("Enter number of nodes : ");
  scanf("%d", &n);
  int Graph[n][n], Dist[n][n];

  for(int i = 0; i < n ; i++)
  {
    for(int j = 0 ; j < n ; j++)
    {
      printf("Distance[%d][%d] = ", i, j);
      scanf("%d", &Graph[i][j]);
    }
  }

  allSourceShortestPath(n, Graph, Dist);

  for(int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf ("\n%d\t", Dist[i][j]);
    }
  }

  return 0;
}
