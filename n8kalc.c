#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]){
	if (argc > 1){
		for (int i = 1; i < argc; i++){
			if (strcmp(argv[i], "-h") == 0|| strcmp(argv[i], "--help") == 0){
				printf("N8Kalc: Nate K's Calculator\n");
				printf("Usage: <Operand1> <Operation Symbol> <Operand2>\n");
				return 0;
			}
			printf("Invalid Argument Provided:\n");
			printf("Try using -h or --help arguments\n");
			return 1;
		}
	}
	long double firstOperand, secondOperand;
	char operationSymbol;
	long double result;
	printf("Calculator Active!\n");
	printf(">>");
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
