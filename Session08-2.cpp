#include<stdio.h>
int main(){
	
	int array[] = {1,3,4};
	int size = sizeof(array) / sizeof(array[0]);
	int input, found = 0;
	printf("nhap vao phan tu can kiem tra: \n");
	scanf("%d", &input);
	for(int i = 0;i < size;i++){
		if(array[i] == input){
			printf("vi tri phan tu trong mang la : %d \n");
			found = 1;
			break;
		}
	}
	if(!found){
		printf("phan tu khong ton tai trong mang \n");
	}
	return 0;
	
}
