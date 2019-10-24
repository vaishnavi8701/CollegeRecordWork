# include <stdio.h>
# define INF 9999

void allSourceShortestPath(int n, int Graph[][10], int Dist[][10])
{
  for(int i = 0 ; i < n ; i++)
  {
    for(int j = 0 ; j < n ; j++)
    {
      Dist[i][j] = Graph[i][j];
    }
  }
  
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
  int Graph[10][10], Dist[10][10];

  for(int i = 0; i < n ; i++)
  {
    for(int j = 0 ; j < n ; j++)
    {
      printf("Distance[%d][%d] = ", i, j);
      scanf("%d", &Graph[i][j]);
      if(Graph[i][j] == 0 && i != j)
        Graph[i][j] = INF;
    }
  }

  printf("\n");
  allSourceShortestPath(n, Graph, Dist);
  printf("\t");
  for(int i = 0 ; i < n ; i++)
    printf("%d\t", i);
  printf("\n");
  for(int i = 0; i < n; i++)
  {
    printf("%d\t", i);
    for (int j = 0; j < n; j++)
    {
      if(Dist[i][j] == INF)
        printf("INF\t");
      else 
        printf("%d\t", Dist[i][j]);
    }
    printf("\n");
  }
  return 0;
}
