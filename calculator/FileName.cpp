#include <stdio.h>
#include <math.h>

double Addition(int a, int b);
double Subtraction(int a, int b);
double Multiplication(int a, int b);
void Division(int a, int b);
void squareRoot(double a);
void cubeRoot(double a);
void modulus(double a, double b);
double exponentiate(double a, double b);
double getNum(void);

double Addition(int a, int b) {
	return a + b;
}

double Subtraction(int a, int b) {
	return a - b;
}

double Multiplication(int a, int b) {
	return a * b;
}

void Division(int a, int b) {
	if (b == 0) {
		printf("Division by zero was avoided.\n");
	} else {
		double result = a / b;
		printf("The result of dividing %.2f by %.2f is: %.2f\n", a, b, result);
	}
}

void squareRoot(double a) {
	if (a < 0) {
		printf("Cannot find the square root of a negative number\n");
	}
	else {
		printf("The square root of %.2f is: %.2f", a, sqrt(a));
	}
}

void cubeRoot(double a) {
	if (a < 0) {
		printf("Cannot find the cube root of a negative number\n");
	}
	else {
		printf("The cube root of %.2f is: %.2f", a, cbrt(a));
	}
}

void modulus(double a, double b) {
	if (b == 0) {
		printf("Division by zero was avoided.\n");
	}
	else {
		printf("The remainder of %.2f / %.2f is %.2f\n", a, b, fmod(a, b));
	}
}

double exponentiate(double a, double b) {
	return pow(a, b);
}

double getNum(void) {
	char record[121] = { 0 };//buffer to store input string
	double number = 0.0; //variable to store the converted string

	//Prompt the user for input and read the input string
	fgets(record, 121, stdin);

	//Attempt to convert the string to a double
	if (sscanf(record, "%lf", &number) != 1) {
			//if conversion fails, set the number to -1
			number = -1.0;
	}
}

int main(void) {

	int choice;
	double num1;
	double num2;
	bool run = true;

	do {
		printf("\t---Shit calculatoor---");
		printf("\nWhat ooperation would u like to perform: ");
		printf("\n1. Addition");
		printf("\n2. Subtraction");
		printf("\n3. Multiplication");
		printf("\n4. Division");
		printf("\n5. Modulus");
		printf("\n6. Squareroot of a number");
		printf("\n7. Cube root of a number");
		printf("\n8. Other options...\n");

		printf("Enter your choice");
		choice = (int)getNum();

		if (choice == 8) {
			printf("Exiting...\n\n");
			run = false;
		}
		else if (choice == 7) {
			printf("Enter the number: ");
			num1 = getNum();
			squareRoot(num1);
		}
		else if (choice < 7 && choice >= 1) {
			printf("Enter the first number: ");
			num1 = getNum();
			printf("Enter the second number: ");
			num2 = getNum();

			if (choice == 1) {
				printf("The sum of %.2f and %.2f is: %.2f\n\n", num1, num2, Addition(num1, num2));
			}
			else if (choice == 2) {
				printf("The subtraction of %.2f from %.2f is: %.2f\n\n", num1, num2, Subtraction(num1, num2));
			}
			else if (choice == 3) {
				printf("The Multiplication of %.2f and %.2f is: %.2f\n\n", num1, num2, Multiplication(num1, num2));
			}
			else if (choice == 4) {
				Division(num1, num2);
			}
			else if (choice == 5) {
				modulus(num1, num2);
			}
			else if (choice == 6) {
				printf("%.2f to the power of %.2f is: %.2f\n\n", num1, num2, exponentiate(num1, num2));
			}
		}

	} while (run
		);
	return 0;
}



