// array display using pointers
#include<stdio.h>
int main()
{
    int arr[5], sum = 0;
    for (int i = 0; i < 5; i++){
        printf("Enter data for [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("Data on [%d] index: %d \n", i, *(arr+i));
    }
}