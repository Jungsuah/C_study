#include <stdio.h>
int main()
{
	int number1,number2;
	char operation;
	
	printf("���� ������ ���� �Է��ϼ���\n");
	printf("(��:5(+,-,*,/)7):");
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
	 	printf("�����ڸ� �߸� �Է��Ͽ����ϴ�.\n");
	 }
	 
}
