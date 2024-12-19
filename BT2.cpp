#include <stdio.h>

int main() {

	int i, arrayInt[5];
	for(i = 0;i < 5;i++){
		printf("Moi ban nhap phan tu arrayInt[%d]: ",i);
		scanf("%d", &arrayInt[i]);
	}
	printf("\nMang vua nhap la arrayInt[5] = " );
	for(i = 0;i < 5;i++){
		printf("%d, ", arrayInt[i]);
	}
	return 0;
}
