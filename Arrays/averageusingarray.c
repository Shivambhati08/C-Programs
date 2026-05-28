#include<stdio.h>
float average(float a[], int size){
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum/size;
}
int main (){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    float a[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%f",&a[i]);
    }
    printf("%.2f",average(a, n));
    return 0;
}