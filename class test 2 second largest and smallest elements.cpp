#include<stdio.h>
int main()
{
     int A[] = {89, 5, 65, 32, 108},i;
     int n = sizeof(A)/sizeof(A[0]), j, temp;
     printf("Array Elements :--> ");
     for(i=0; i<n; i++)
        printf("%d  ", A[i]);
     // SORT ARRAY
     for(i=0; i< n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(A[j] < A[i])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("\n\nSmallest Element :--> %d", A[0]);
     printf("\nLargest Element :--> %d", A[n - 1]);
     printf("\n\nSecond Smallest Element :--> %d", A[1]);
     printf("\nSecond Largest Element :--> %d", A[n - 2]);
     return 0;
}
