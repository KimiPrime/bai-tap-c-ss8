#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen n (kich thuoc ma tran vuong): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Nhap cac phan tu cho ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Ma tran vuong vua nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

