#include <stdio.h>

int main() {
	int a;
	printf("Moi ban nhap vao do dai cua mang: ");
	scanf("%d", &a);
	
	int arrayInt[a];
	for(int i = 0;i < a;i++){
		printf("Moi ban nhap vao phan tu arrayInt[%d]: ",i);
		scanf("%p", &arrayInt[i]);
	}
	return 0;
}
