#include <stdio.h>

int Addition(int a, int b);

int Addition(int a, int b) {
	return a + b;
}

int main(void) {
	printf("\t---Shit calculatoor---");
	printf("What ooperation would u like to perform: ");
	printf("1. Addition");
	printf("2. Subtraction");
	printf("3. Multiplication");
	printf("4. Division");
	printf("5. Modulus");
	printf("6. Square/CUbe of a number");
	printf("7. Other options...");

	return 0;
}



