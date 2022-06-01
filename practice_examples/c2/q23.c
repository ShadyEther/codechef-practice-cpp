// no. of odd even
#include<stdio.h>
int main()
{
    int num[5],n, oddNums = 0, evenNums = 0, primeNums = 0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter %d values: ",n);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        if (num[j]%2)
            oddNums++;
        
        if (num[j]%2 == 0)
            evenNums++;

        if (num[j] == 1 || num[j] == 2)
            primeNums++;
        else
        {
            int isPrime = 1;
            for (int k = 2; k <= num[j]/2; k++)
            {
                if (num[j]%k)
                    isPrime = 0;
                    break;
            }
            if (isPrime)
                primeNums++;
        }
    }
    printf("no. of odd: %d \nno. of even: %d \nno. of prime: %d\n", oddNums, evenNums, primeNums);
    return 0;
}