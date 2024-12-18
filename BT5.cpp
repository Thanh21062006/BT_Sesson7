#include <stdio.h>

int main() {
	int score[5] = {8, 6, 10, 9, 5}, max, min, a;
	
	for(int i = 0;i < 5;i++){
		if(score[i] >= a){
			max = score[i];
			a = max;
		}
		if(score[i] <= a){
			min = score[i];
		}
	}
	printf("Gia tri lon nhat la: %d \n", max);
	printf("Gia tri nho nhat la: %d \n", min);
	return 0;
}
