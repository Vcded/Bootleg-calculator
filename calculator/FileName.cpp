//TO-DO: Trigonometric functions, Logarithmic functions, Move square, cube root and modulus operations to "More operations"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Addition(double a, double b);
double Subtraction(double a, double b);
double Multiplication(double a, double b);
void Division(double a, double b);
void squareRoot(double a);
void cubeRoot(double a);
void modulus(double a, double b);
double exponentiate(double a, double b);
double getNum(void);
void clearScreen();

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
	if (sscanf_s(record, "%lf", &number) != 1) {
			//if conversion fails, set the number to -1
			number = -1.0;
	}

	return number;
}

//This function clears the screen 😃😃
void clearScreen() {
#ifdef _WIN32
	system("cls");
#endif // _WIN32
}

int main(void) {

	//char letter[2] = {'Y', 'N'};
	int again;
	int choice;
	int more{};
	double num1;
	double num2;
	bool run = true;

	do {
		printf("\t---Shit kalculatoor---");
		printf("\nWhat ooperation would u like to perform: ");
		printf("\n1. Addition");
		printf("\n2. Subtraction");
		printf("\n3. Multiplication");
		printf("\n4. Division");
		printf("\n5. More operations...");
		printf("\n6. Exit...\n");

		printf("Enter your choice: ");
		choice = (int)getNum();
		clearScreen();

		if (choice == 6) {
			printf("Exiting...\n\n");
			run = false;
		}
		else if (choice == 5) {
			printf("\t---More Operations---\n");
			printf("1.Modulus\n");
			printf("2.Square Root\n");
			printf("3.Cube Root\n");
			printf("4. Exponentiate\n");
			printf("\n Enter a choice: ");
			more = (int)getNum();
			clearScreen();
		} if (more == 1) {
			printf("\t---Modulus---\n");
			printf("Enter the first number: \n");
			num1 = (int)getNum();
			printf("Enter the second number: \n");
			num2 = (int)getNum();
			modulus(num1, num2);
		}
		else if (more == 2) {
			printf("\t---Square root---");
			printf("\nEnter the number: ");
			num1 = (int)getNum();
			squareRoot(num1);
		} 
		else if (more == 3) {
			printf("\t---Cube root---");
			printf("\nEnter the number: ");
			num1 = (int)getNum();
			cubeRoot(num1);
		}
		else if (more == 4) {
			printf("\t---Exponentiate---");
			printf("\nEnter the base number: ");
			num1 = getNum();
			printf("\nEnter the exponent: ");
			num2 = getNum();
			printf("\n%.2f to the power of %.2f is: %.2f\n\n", num1, num2, exponentiate(num1, num2));
		}
		else if (choice < 5 && choice >= 1) {
			if (choice == 1) {
				printf("---Addition---\n");
			}
			else if (choice == 2) {
				printf("---Subtraction---\n");
			}
			else if (choice == 3) {
				printf("---Multiplication---\n");
			}
			else if (choice == 4) {
				printf("---Division---\n");
			}

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
		
			printf("Go again?");
			again = (int)getNum();

			if (again == 0) {
				printf("Exiting...\n\n");
				run = false;
			}
			else if (again != 0){
				clearScreen();
			
			}
			else {
				printf("Invalid input. Exiting...\n\n");
				run = false;
			}
		}

		/*printf("Perform another operation(Y/N)?");
		fgets(letter, 30, stdin);

		if (letter == 'Y') {
			run = false;
		}
		else {
			continue;
		}*/

	} while (run);
	return 0;
}

//Hello, This is the creator of this code. I am a beginner in C programming and I am open to any suggestions or corrections. Thank you for your time.
//Also, this is a personal project that I am working on to improve my programming skills.

