# include <stdio.h>
# define INF 9999

void singleSourceShortestPath(int n, int v, int Graph[][10], int Dist[])
{
    int u, Count, Flag[10], Min;
    for(int i = 0 ; i < n ; i++)
    {
        Flag[i] = 0;
        Dist[i] = Graph[v][i];
    }
  Count = 2;
  while(Count <= n)
  {
    Min = 99;
    for(int w = 0 ; w < n ; w++) 
    {
        if(Dist[w] < Min && !Flag[w])
        {
            Min = Dist[w];
            u = w;
        }
    }
    Flag[u] = 1;
    Count++;
    for(int w = 0 ; w < n ; w++)
    {
        if((Dist[u]+Graph[u][w]<Dist[w]) && !Flag[w])
        {
            Dist[w]=Dist[u]+Graph[u][w];
        }
    }
  }
}

int main(void)
{
    int n;
    printf("\nEnter the number of nodes : ");
    scanf("%d", &n);
    int Graph[10][10], Dist[10];
    printf("\nEnter the distance matrix : \n");

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            printf("Distance[%d][%d] = ", i, j);
            scanf("%d", &Graph[i][j]);
            if(Graph[i][j] == 0)
              Graph[i][j] = INF;
        }
    }

    int v;
    printf("\nEnter the source node : ");
    scanf("%d", &v);
    singleSourceShortestPath(n, v, Graph, Dist);
    for(int i = 0 ; i < n ; i++)
    {
        if(i != v)
        {
          printf("\n%d -> %d", i, Dist[i]);
        }
    }
    return 0;
}
