#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int N; //���� ���� ����. ���� N
	int count = 0; //count ����
	int real_cnt = 0;

	scanf("%d\n", &N);

	int* arr = (int*)malloc(sizeof(int) * N);
	//scanf�� arr�迭�� ���ڸ� �ϳ��� �־���.
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	/*
	//test : arr�迭�� ���ڰ� ����� ����?
	for (int i = 0; i < N; i++) {
		printf("%d \n", arr[i]);
	}
	*/

	for (int i = 0; i < N; i++) { //arr[i]��° ���� Ȯ����.
		count = 0;
		for (int j = 1; j <= arr[i]; j++) {
			if (arr[i] % j == 0)
				count++;
		}
		if (count == 2)
			real_cnt++;
	}

	printf("%d", real_cnt);
}


