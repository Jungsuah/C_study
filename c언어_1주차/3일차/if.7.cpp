#include <stdio.h>
int main()
{
	int number1,number2;
	char operation;
	
	printf("정수 연산자 정수 입력하세요\n");
	printf("(예:5(+,-,*,/)7):");
	scanf("%d %c %d", &number1, &operation, &number2);
	
	if(operation == '+')
	{
		printf("%d %c %d= %d\n", number1, operation, number2, number1 + number2);
		
	 } 
	 else if(operation == '-')
	{
		printf("%d %c %d= %d\n", number1, operation, number2, number1 - number2);
		
	 }
	else if(operation == '*')
	{
		printf("%d %c %d= %d\n", number1, operation, number2, number1 * number2);
		
	 }  
	else if(operation == '/')
	{
		printf("%d %c %d= %d\n", number1, operation, number2, number1 / number2);
		
	 } 
	 else
	 {
	 	printf("연산자를 잘못 입력하였습니다.\n");
	 }
	 
}
