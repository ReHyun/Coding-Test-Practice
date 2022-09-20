#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
	int N;
	int i;
	int j;

	scanf("%d", &N);


	for (i = 2; i <= N; i++) {
		while (1) {
			if (N == 1) {
				return 0;
			}
			else {
				if (N % i == 0) {
					N /= i;
					printf("%d\n", i);
				}
				else {
					break;
				}
			}

		}
	}
	return 0;
}