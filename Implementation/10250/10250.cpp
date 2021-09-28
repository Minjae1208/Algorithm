// 백준 10250 문제 ACM 호텔

#include <stdio.h>

int main()
{
	// T : 테스트 데이터 개수
	// H : 층 수
	// W : 방 개수
	// N : N번째 손님
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
	
	// 층 번호 구하기  : N - ((N / H) * H)
	// 방 번호 구하기 : (N / H) + 1

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