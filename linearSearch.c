#include <stdio.h>

int main() {
    int arrLength, i, num, count=0;
    printf("Enter the length of array\n");
    scanf("%d", &arrLength);

    int arr[arrLength];

    printf("Enter the number for your array\n");
    for(i = 0; i<arrLength; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter a number\n");
    scanf("%d", &num);

    for (i = 0; i < arrLength; i++) {
        if(num == arr[i]) {
                printf("%d is located in %d\n", num, i);
            count++;
        }
    }

    if(count) {
        printf("The %d number is found %d times",num,count);
    } else {
        printf("Not int the array");
    }
}
