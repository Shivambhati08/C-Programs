#include<stdio.h>
int main(){
    int r1,r2,c1,c2;
    printf("Enter the nubmer of rows of mat1: ");
    scanf("%d",&r1);
    printf("Enter the number of columns of mat1: ");
    scanf("%d",&c1);
    printf("Enter the nubmer of rows of mat2: ");
    scanf("%d",&r2);
    printf("Enter the number of columns of mat2: ");
    scanf("%d",&c2);
    int arr1[r1][c1],arr2[r2][c2],arr3[10][10];
    printf("Enter the elements of mat1:");
    for (int i = 0; i <r1; i++)
    {
        for (int j = 0; j<c1; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of mat2:");
    for (int i = 0; i <r2; i++)
    {
        for (int j = 0; j<c2; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for (int i = 0; i <r1; i++)
    {
        for (int j = 0; j<c1; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("The addition of two matrices is : ");
    for (int i = 0; i <r1; i++)
    {
        for (int j = 0; j<c1; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}