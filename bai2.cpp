#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); 

    int x, found = 0;

    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Vi tri phan tu trong mang la: %d\n", i + 1); 
            found = 1; 
            break; 
        }
    }
    if (found == 0) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}
