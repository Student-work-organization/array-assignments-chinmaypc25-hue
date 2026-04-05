#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 8, 25};
    int n = 5;

    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
