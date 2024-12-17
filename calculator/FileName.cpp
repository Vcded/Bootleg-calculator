#include <stdio.h>

int Addition(int a, int b);
int Subtraction(int a, int b);
int Multiplication(int a, int b);

int Addition(int a, int b) {
	return a + b;
}

int Subtraction(int a, int b) {
	return a - b;
}

int Multiplication(int a, int b) {
	return a * b;
}

int main(void) {
	printf("\t---Shit calculatoor---");
	printf("\nWhat ooperation would u like to perform: ");
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\n5. Modulus");
	printf("\n6. Square/CUbe of a number");
	printf("\n7. Other options...\n");

	return 0;
}



