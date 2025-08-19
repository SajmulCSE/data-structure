#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the size of array");

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The array is: ");

     for ( i = 0; i < n; i++)
    {
        printf("\n%d", arr[i]);
    }



    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j +1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }

    printf("\nThe new array is:");

     for ( i = 0; i < n; i++)
    {
        printf("\n%d", arr[i]);
    }
}
