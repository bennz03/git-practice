#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; 
    int *arr; 
    int sum = 0; 

 r
    printf("Enter the number of elements: ");
    scanf("%d", &n);

   
    arr = (int *)malloc(n * sizeof(int));


    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }

  
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }


    printf("Sum of elements: %d\n", sum);

  
    free(arr);

    return 0;
}
