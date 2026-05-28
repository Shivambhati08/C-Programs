#include<stdio.h>
float averageofage(int *a, int size){
    float sum = 0;
    for (int i = 0; i <size; i++)
    {
        sum += a[i];
    }
    return sum/size;
}
int main (){
    int age[5] = {21,22,23,24,25};
    printf("Average of age: %.2f",averageofage(age, 5));
    return 0;
}