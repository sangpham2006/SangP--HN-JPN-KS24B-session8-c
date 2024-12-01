#include <stdio.h>
int main() {
   
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };
    int sum = 0;
    printf("Ma tran 2x2 la:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);  
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum += matrix[i][j];
        }
    }
    printf("Tong cac phan tu tren duong bien cua ma tran 2x2 la: %d\n", sum);
    return 0;
}

