#include <stdio.h>
int main() {
	char target1[4] = "\0";
	char target2[4] = "\0";
	int num1 = 0;
	int num2 = 0;
	scanf("%s %s", target1, target2);
	num1 = (target1[2] - '0') * 100 + (target1[1] - '0') * 10 + (target1[0] - '0');
	num2 = (target2[2] - '0') * 100 + (target2[1] - '0') * 10 + (target2[0] - '0');
	if (num1 > num2)
		printf("%d", num1);
	else
		printf("%d", num2);
	return 0;
}