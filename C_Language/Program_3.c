//Binary Search Program
#include <stdio.h>

int binary(int arr[], int size, int num) {
    int l = 0;
    int r = size - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == num)
            return mid;

        else if (arr[mid] < num)
            l = mid + 1;

        else
            r = mid - 1;
    }

    return -1;
}

int main() {
    int n, num;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the values: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int size = n;
    printf("Enter the number which you want to find: ");
    scanf("%d", &num);

    int result = binary(arr, size, num);

    if (result != -1)
        printf("Element %d found at index %d\n", num, result);
    else
        printf("Element %d not found in the array\n", num);

    return 0;
}
