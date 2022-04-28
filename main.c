# include <stdio.h>
void storetables(int arr[][],int n,int m,int number);
int main()
{
    int table[2][10];
    storetables(table, 0,10,2);
    storetables(table, 0,10,2);
    return 0;
    }
void storetables(int arr[][],int n,int m,int number){
    for (int i=0; i<m; i++) {
        arr[n][m]=number*(i+1);
        
    }
    
}

/*void printarr(arr[],int n)
{
    for (int i=0; i<=n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
}
void reverse(arr[],int n){
    for (int i=0; i<(n/2); i++)
    {
       int firstval=arr[i];
        int secondval=arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstval;
        
    }
    
}
*/
