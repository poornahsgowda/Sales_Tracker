#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[100]; // Array to store daily sales data
    int n; // Number of days
    int max = 0; // Variable to store the highest sales value

    // Taking input for the number of days
    printf("Enter The Number of Days: ");
    scanf("%d", &n);

    // Taking sales input and determining the maximum sales value
    for (int i = 0; i < n; i++) {
        printf("Enter The Sales of Day %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] > max) { // If current day's sale is greater than max, update max
            max = arr[i];
        }
    }

    // Checking and printing all days that have the maximum sales
    printf("The Highest Sale is %d on Day(s): ", max);
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}
