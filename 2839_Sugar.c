#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int X = 5; //5kg ����
	int Y = 3; //3kg ����
	int X_cnt = 0; //5kg ���� ����
	int Y_cnt = 0; //3kg ���� ����
	int total = 0;
	int remainder = 0; //��� ���
	int last = 0;
	int count = 0; 
	
	scanf("%d", &total); //N�� �޾ƿ���

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




