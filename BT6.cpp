#include <stdio.h>

int main() {
	int arrayInt[5] = {1, 2, 3, 4, 5};
	
	for(int i = 0;i < 5;i++){
		if(arrayInt[i] % 2 == 0){
			arrayInt[i] += 3;
		}
		else{
			arrayInt[i] += 2;
		}
		printf("arrayInt[%d] = %d \n", i, arrayInt[i]);
	}
	return 0;
}
