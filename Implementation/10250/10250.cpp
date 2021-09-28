// ���� 10250 ���� ACM ȣ��

#include <stdio.h>

int main()
{
	// T : �׽�Ʈ ������ ����
	// H : �� ��
	// W : �� ����
	// N : N��° �մ�
	int T;
	int *H, *W, *N;

	scanf_s("%d", &T);
	H = new int[T];
	W = new int[T];
	N = new int[T];

	for (int i = 0; i < T; i++)
	{
		scanf_s("%d %d %d", &H[i], &W[i], &N[i]);

		if (H[i] <= 1 && W[i] >= 99 && N[i] <= 1 && (N[i] >= H[i] * W[i]))
			return -1;
	}
	
	// �� ��ȣ ���ϱ�  : N - ((N / H) * H)
	// �� ��ȣ ���ϱ� : (N / H) + 1

	for (int i = 0; i < T; i++)
	{
		int j = N[i] / H[i];
		printf("%d", N[i] - (j * H[i]));
		if (j + 1 >= 10)
		{
			printf("%d\n", j + 1);
		}
		else
		{
			printf("0%d\n", j + 1);
		}
	}
	
	delete(H);
	delete(W);
	delete(N);

	return 0;
}