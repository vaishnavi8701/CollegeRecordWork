# include <stdio.h>
# include <math.h>

int leftChild(int i)
{
    return 2 * i + 1;
}

int rightChild(int i)
{
    return 2 * i + 2;
}

void minHeap(int Arr[], int n, int i)
{
    int l, r, Least;
    l = leftChild(i);
    r = rightChild(i);
  
    if(l < n && Arr[l] < Arr[Least])
        Least = l;
    
    if(r < n && Arr[r] < Arr[Least])
        Least = r;
    
    if(Least != i)
    {
        int Temp = Arr[i];
        Arr[i] = Arr[Least];
        Arr[Least] = Temp;
        minHeap(Arr, n, Least);
    }
}

int main(void) 
{
    int n;
    printf("\nEnter number of elements : ");
    scanf("%d", &n);
    
    printf("\nEnter The Elements : ");
    int Arr[n];
  
    for(int i = 0 ; i < n ; i++)
    {
       scanf("%d", &Arr[i]);
       minHeap(Arr, n, i);
    }
    
    //for(int i = n / 2 - 1 ; i >= 0 ; i--)
      //minHeap(Arr, n, i);
    
    printf("\nMin Heap : ");
    
    for(int i = 0 ; i < n ; i++)
     printf("%d ", Arr[i]);
    return 0;
}
