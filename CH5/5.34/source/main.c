#include <stdio.h>
#include <stdlib.h>

int pw(int, int);
int main() {
	int a, b;
	printf("enter the number and power:");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("ans= %d", pw(a, b));
	return 0;

}
int pw(int c, int b) {
	int ans = 1;
	for (int i = 1; i <= b; i++) {
		ans = ans * c;
	}
	return ans;
}