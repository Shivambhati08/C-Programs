#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <n; i++)
    {
        sum += arr[i];
    }
    printf("sum = %d", sum);
    return 0;
}