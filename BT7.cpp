#include <stdio.h>

int main() {
	int a, check, trueFalse;
	printf("Moi ban nhap vao so phan tu cua mang: ");
	scanf("%d", &a);
	
	int arrayInt[a];
	for(int i = 0;i < a;i++){
		printf("Moi ban nhap vao phan tu arrayInt[%d]: ",i);
		scanf("%d", &check);
		trueFalse = 1;
		if(check % 2 != 0){
			arrayInt[i] = check;
		}
		else{
			while(trueFalse){
				printf("Moi ban nhap vao phan tu arrayInt[%d]: ",i);
				scanf("%d", &check);
				if(check % 2 != 0){
					arrayInt[i] = check;
					trueFalse = 0;
				}
			}
		}
}
	return 0;
}
