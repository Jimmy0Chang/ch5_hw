#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int m, n, temp, i;
	printf("Input m & n:");
	scanf_s("%d%d", &m, &n);
	if (m < n) {
		temp = m;
		m = n;
		n = temp;
	}
	for (i = m; i > 0; i++) {
		if (i%m == 0 && i%n == 0)
		{
			printf("最小公倍數 %d\n", i);
			break;
		}
	}
	return 0;

}