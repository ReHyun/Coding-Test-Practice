#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>




int main() {
	int A = 0; //���� A���� �ö� �� �ִ�.
	int B = 0; //�㿡 B���� �ö� �� �ִ�.
	int V = 0; //���� ���밡�� �� ����
	int count = 0; //��ĥ�� �������� ī��Ʈ
	int cur = 0; //���� �� ���� ������ ��Ÿ��

	scanf("%d %d %d", &A, &B, &V);


	/*  ����� ������, �ð��ʰ��� 
	while (cur < V) {
		count = count + 1;
		cur = cur + A;
		if (cur >= V)
			break;
		cur = cur - B;
	}
	*/

	//�ð��ʰ� �ȵǰ� �۵��ϴ� �˰���
	count = ceil((double)(V - A) / (A - B));
	count++;

	printf("%d", count);

}

