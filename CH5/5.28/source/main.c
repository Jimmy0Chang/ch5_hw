#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char letter='0',letter1='0';
	printf("input the letter :");
	scanf_s("%c", &letter);
	if (letter >= 'a' && letter <= 'z') {
		letter1 = letter - 32;
		printf("%c \n", letter1);
	}
	else if (letter >= 'A' && letter <= 'Z') {
		letter1 = letter + 32;
		printf("%c \n", letter1);
	}
	

	system("pause");
	return 0;

}
