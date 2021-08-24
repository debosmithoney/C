#include <stdio.h>
#include <stdlib.h>

#define size 64
int stack[size], top = -1;

void push() {
	int data;
	if(top + 1 == size) {
		printf("\nERROR! Stack overflow");
		return;
	}
	printf("\nEnter data to push: ");
	scanf("%d", &data);
	stack[++top] = data;
	printf("\nPushed %d into the stack", stack[top]);
}

void pop() {
	if(top == -1) {
		printf("\nERROR! Stack underflow");
		return;
	}
	top--;
	printf("\nPopped %d out of the stack", stack[top+1]);
}

void display() {
	if(top  == -1) {
		printf("\nStack is empty");
		return;
	}
	printf("\n");
	for(int i = 0; i <= top; i++)
		printf("[%d] ", stack[i]);
}

int main() {
	int c;
	do {
		system("cls");
		printf("0. Exit\n1. Push\n2. Pop\n3. Display");
		printf("\nEnter your choice: ");
		scanf("%d", &c);
		switch(c) {
			case 0: printf("\nThank You\n");
					exit(0);
					break;
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			default:printf("\nWrong Choice! Try Again");
		}
		getchar();
		printf("\n\nPress enter to continue...");
		getchar();
	} while(c != 0);
	return 0;
}
