#include <stdio.h>

int main() {
	int arrayInt[5] = {1,3,4,5,8};
	for(int i = 0;i < sizeof(arrayInt)/sizeof(int);i++){
		printf("%d ", arrayInt[i]);
	}
	printf("\nDo dai cua mang la %d",sizeof(arrayInt)/sizeof(int));
	return 0;
}
