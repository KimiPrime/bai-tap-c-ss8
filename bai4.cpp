#include <stdio.h>

int main() {
    int arr[3][4] = {
        {1, 5, 3, 11},
        {9, 7, 8, 19},
        {14, 2, 10, 20}
    };

    int max = arr[0][0];
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)  
        for (int j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++)  
            if (arr[i][j] > max) max = arr[i][j];

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}
