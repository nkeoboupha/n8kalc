#include <stdio.h>

int main(void){
	long double firstOperand, secondOperand;
	char operationSymbol;
	long double result;
	scanf("%Lf %c %Lf", &firstOperand, &operationSymbol, &secondOperand);
	switch (operationSymbol){
		case '+':
			result = firstOperand + secondOperand;
			break;
		case '-':
			result = firstOperand - secondOperand;
			break;
		case '*':
			result = firstOperand * secondOperand;
			break;
		case '/':
			result = firstOperand / secondOperand;
			break;
		default:
			printf("Invalid Operation");
			return 1;
	}
	printf("%Lf", result);
	return 0;
}
