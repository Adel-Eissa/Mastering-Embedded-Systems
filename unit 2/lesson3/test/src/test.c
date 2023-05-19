#include <stdio.h>
int main()
{
float num1,num2;
char c;
printf("Enter operator either * or / or + or -: " );
fflush(stdin);
fflush(stdout);
scanf("%c",&c);
printf("Enter two operands: ");
fflush(stdin);
fflush(stdout);
scanf("%f %f",&num1,&num2);
switch (c)
{
case '*':
printf("%f*%f=%f",num1,num2,num1*num2);
break;
case '/':
printf("%f/%f=%f",num1,num2,num1/num2);
break;
case '+':
printf("%f+%f=%f",num1,num2,num1+num2);
break;
case '-':
printf("%f-%f=%f",num1,num2,num1-num2);
break;
default :
	printf("Error operator is not correct");
	break;
}

}
