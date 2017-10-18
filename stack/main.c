#include "stack.h"
StackType in;
StackType out;
void main () {
	
	init (&in);
	init (&out);
	enque (1);
	enque (2);
	enque (3);
	printf ("%d\n", deque());
	printf ("%d\n", deque());
	printf ("%d\n", deque());
}
int enque(int num) {
	push(&in, num);
	return FUNC_SUC;
}
int deque() {
	int x;
	if (is_empty (&in) && is_empty (&out))
	{ 
		fprintf(stdout, "overflow");
		return FUNC_FAL;
	}
	if (is_empty(&out)) {
		while (!is_empty (&in)) {
			x = pop(&in);
			push(&out, x);
		}
	}
	x = pop(&out);
	return x;
}
