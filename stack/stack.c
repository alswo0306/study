
#include "stack.h"
void init(StackType *s) {
	s->top = -1;
}
int is_empty(StackType *s) {
	return (s->top == -1);
}
int is_full(StackType *s) {
	return (s->top == (MAX_STACK_SIZE - 1));
}
void push(StackType *s, element item) {
	if (is_full(s)) {
		fprintf(stderr, "overflow\n");
		return;
	}
	else s->stack[++(s->top)] = item;
}
element pop(StackType *s) {
	if (is_empty(s)) {
		fprintf(stderr, "empty\n");
		exit(1);
	}
	else return s->stack[(s->top)--];
}
element peek(StackType *s) {
	if (is_empty(s)) {
		fprintf(stderr, "empty\n");
		exit(1);
	}
	else return s->stack[s->top];
}