//simple calculator
#include <stdio.h>
int main(){
	int a,b,d;
	char o;
	printf("input operator: ");
	scanf("%c",&o);
	printf("input first number: ");
	scanf("%d",&a);
	printf("input second number: ");
	scanf("%d",&b);
	switch(o){
		case '+':
			d=a+b;
			printf("Result : %d\n",d);
			break;
		case '-':
			d=a-b;
			printf("Result :%d\n",d);
			break;
		case '*':
			d=a*b;
			printf("Result :%d\n",d);
			break;
		case '/':
			d=a/b;
			printf("Result :%d\n",d);
			break;
	}
	return 0;
}