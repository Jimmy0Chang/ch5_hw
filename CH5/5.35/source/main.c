#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a[10] = { 0 }, i;
	for (i = 0;i < 10;i++) {
			a[0] = 0;
			a[1] = 1;
			if(i>=2)
			a[i] = a[i - 1] + a[i - 2];
		printf("%3d ", a[i]);
	}
	system("pause");
	return 0;
}
