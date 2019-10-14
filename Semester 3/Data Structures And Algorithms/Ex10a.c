# include <stdio.h>
# define INF 9999

void singleSourceShortestPath(int n, int v, int Graph[][10], int Dist[])
{
  int i,u,count,w,flag[10],min;
for(i=0;i<n;i++)
flag[i]=0,Dist[i]=Graph[v][i];
count=2;
while(count<=n)
{
min=99;
for(w=0;w<n;w++)
 if(Dist[w]<min && !flag[w])
  min=Dist[w],u=w;
flag[u]=1;
count++;
for(w=0;w<n;w++)
 if((Dist[u]+Graph[u][w]<Dist[w]) && !flag[w])
  Dist[w]=Dist[u]+Graph[u][w];
}
}

int main(void)
{
    int n;
    printf("\nEnter the number of nodes : ");
    scanf("%d", &n);
    int Graph[n][n], Dist[n];
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
