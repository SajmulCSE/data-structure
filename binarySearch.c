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

    int high = n - 1, low = 0, mid = 0, item, count =0;

    printf("Enter the number what you want to search");
    scanf("%d", &item);

    while (low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == item) {
            for(i = 0; i < n; i++) {
                if(arr[i] == item) {
                    count++;
                    printf("%d find at %d index\n", item, i);
                }
            }
            break;
        } else if(arr[mid] < item) {
            low = mid + 1;
        } else if(arr[mid] > item) {
            high = mid - 1;
        }
    }

    if(!count) {
        printf("Item not found");
    }

}
