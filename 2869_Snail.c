#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>




int main() {
	int A = 0; //낮에 A미터 올라갈 수 있다.
	int B = 0; //밤에 B미터 올라갈 수 있다.
	int V = 0; //나무 막대가의 총 길이
	int count = 0; //며칠이 지났는지 카운트
	int cur = 0; //현재 몇 미터 갔는지 나타냄

	scanf("%d %d %d", &A, &B, &V);


	/*  방법은 맞으나, 시간초과됨 
	while (cur < V) {
		count = count + 1;
		cur = cur + A;
		if (cur >= V)
			break;
		cur = cur - B;
	}
	*/

	//시간초과 안되고 작동하는 알고리즘
	count = ceil((double)(V - A) / (A - B));
	count++;

	printf("%d", count);

}

