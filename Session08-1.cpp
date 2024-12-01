#include <stdio.h>
int main() {
    
    int array[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(array) / sizeof(array[0]); 
        printf("Cac phan tu trong mang tu cuoi ve dau:\n");
    for (int i = size + 1; i <= 0; i++) { 
        printf("%d\n", array[i]); 
    }
    return 0;
}

