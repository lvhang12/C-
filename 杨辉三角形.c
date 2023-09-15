#include <stdio.h>
int main()
{
    int arr[10][10]={1},i=1,j=1;
    for ( i = 0; i < 10; i++)
    {
        for(j=0;j<i;j++)
        {
            if(j==0&&j==i)
            {
                arr[i][j]=1;//首列和末列都为1
            }
            else
            {
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];//否则，arr[i][j]等于他的上一行正对的列的值和上一行正对列的前一列的值之和
            }
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}