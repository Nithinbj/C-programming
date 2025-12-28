#include<stdio.h>

void read(int a, int b, int arr[a][b])
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void write(int a, int b, int arr[a][b])
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void add_matrices(int a, int b, int arr1[a][b], int arr2[a][b])
{
    int s[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            s[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row,column;
    printf("Enter the row and column: ");
    scanf("%d%d",&row,&column);

    int a1[row][column], a2[row][column], sum[row][column];

    read(row,column,a1);
    read(row,column,a2);

    write(row,column,a1);
    write(row,column,a2);

    add_matrices(row,column,a1,a2);

    return 0;
}