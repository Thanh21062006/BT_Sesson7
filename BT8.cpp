#include <stdio.h>

int main() {
	int a, b;
	printf("Moi ban nhap vao do dai cua mang: ");
	scanf("%d", &a);
	printf("Moi ban nhap vao do dai cua phan tu trong mang: ");
	scanf("%d", &b);
	
	int array[a][b];
	for(int i = 0;i < sizeof(array)/sizeof(array[0]);i++){
		for(int j = 0;j < sizeof(array[0])/sizeof(int);j++){
			printf("\nMoi ban nhap phan tu array[%d][%d]: ", i, j);
			scanf("%d", &array[i][j]);
		}
		
	}
		printf("\n");
	for(int i = 0;i < sizeof(array)/sizeof(array[0]);i++){
		for(int j = 0;j < sizeof(array[0])/sizeof(int);j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
