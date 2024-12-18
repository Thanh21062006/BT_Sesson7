#include <stdio.h>

int main() {
	int check=0, score[5] = {4, 9, 6, 5, 10};
	for(int i = 0;i < 5;i++ ){
		if(score[i] % 2 == 0){
			printf("%d la so chan \n", score[i]);
			check++;
		}
	}
	if(check == 0){
		printf("Mang khong chua so chan!");
	}
	return 0;
}
