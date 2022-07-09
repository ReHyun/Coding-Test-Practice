#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int X = 5; //5kg 설탕
	int Y = 3; //3kg 설탕
	int X_cnt = 0; //5kg 봉투 개수
	int Y_cnt = 0; //3kg 봉투 개수
	int total = 0;
	int remainder = 0; //계산 결과
	int last = 0;
	int count = 0; 
	
	scanf("%d", &total); //N값 받아오기

	remainder = total % X;
	X_cnt = total / X;

	while (remainder <= total) {
		if ((remainder % Y) == 0) {
			Y_cnt = remainder / Y;
			break;
		}
		remainder += 5;
		X_cnt -= 1;
	}


	if (remainder > total) {
		count = -1;
	}
	else {
		count = X_cnt + Y_cnt;
	}

	printf("%d", count);

}




