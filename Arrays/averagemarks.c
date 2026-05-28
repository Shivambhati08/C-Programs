#include<stdio.h>
int main (){
    int arr[5],sum = 0;
    for (int i = 0; i<5 ; i++)
    {
        printf("Enter the marks:");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    int avg = sum/5;
    printf("%d",avg);
    return 0;
}