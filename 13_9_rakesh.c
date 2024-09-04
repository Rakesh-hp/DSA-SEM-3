#include <stdio.h>

int main() {
    int size, i, j;
    int a;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size]; 
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Unique elements in the array are: ");
    for (i = 0; i < size; i++) {
        a = 1; 
        for (j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                a = 0; 
                break;
            }
        }
        if (a==1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
