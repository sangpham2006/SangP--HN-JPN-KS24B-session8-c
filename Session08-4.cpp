#include <stdio.h>
int main() {
    
	int array[2][2] = {{2, 4}, {10, 5}};
    int rows = 2, cols = 2;
    printf("Ma tran 2x2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);  
        }
        printf("\n");  
    }
    int max = array[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

