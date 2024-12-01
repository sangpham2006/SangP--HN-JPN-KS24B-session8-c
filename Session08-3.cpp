#include <stdio.h>
int main() {
    
	int n;
    printf("Nhap vao kich thuoc ma tran vuong: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Nhap gia tri cho ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap gia tri cho matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Ma tran vuong da nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

