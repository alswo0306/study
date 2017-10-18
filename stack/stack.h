#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100
#define FUNC_SUC 0
#define FUNC_FAL 1

typedef int element;
typedef struct {
	element stack[MAX_STACK_SIZE];
	int top;
}StackType;