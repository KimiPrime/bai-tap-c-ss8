#include <stdio.h>

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int sum = 0;  

    printf("Cac phan tu tren duong cheo phu: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", matrix[i][3-i]);  
        sum += matrix[i][3-i];         
    }

    printf("\nTong cac phan tu tren duong cheo phu la: %d\n", sum);

    return 0;
}
