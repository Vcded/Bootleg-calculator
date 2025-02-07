#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Addition(double a, double b) {
	return a + b;
}

double Subtraction(double a, double b) {
	return a - b;
}

double Multiplication(double a, double b) {
	return a * b;
}

void Division(double a, double b) {
	if (b == 0) {
		printf("Division by zero was avoided.\n");
	}
	else {
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
	if (sscanf_s(record, "%lf", &number) != 1) {
		//if conversion fails, set the number to -1
		number = -1.0;
	}

	return number;
}

//This function clears the screen ????
void clearScreen() {
#ifdef _WIN32
	system("cls");
#endif // _WIN32
}