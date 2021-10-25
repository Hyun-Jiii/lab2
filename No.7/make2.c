#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int a;
int b;

int main()
{
	char choosecal[10] = ""; 
	const char* Add = "add";
	const char* sub = "subtract";
	const char* mul = "multiply";
	const char* div = "divide";
	
	printf("What do you want to calculate? ");
	scanf("%s", choosecal);
	printf("Two numbers = ");
	scanf("%d", &a);
	scanf("%d", &b);
	
	
	if(strcmp(choosecal, Add) == 0){		
		printf("add = %d \n", add(a, b));
	} else if(strcmp(choosecal, sub) == 0){
		printf("subtract = %d \n", subtract(a, b));
	} else if(strcmp(choosecal, mul) == 0){
		printf("multiply = %d \n", multiply(a, b));
	} else if(strcmp(choosecal, div) == 0){
		printf("divide = %d \n", divide(a, b));
	}
	
}

int add (int a, int b){
	return a+b;
}

int subtract(int a, int b){
	return a-b;
}

int multiply(int a, int b){
	return a*b;
}

int divide(int a, int b){
	return a/b;
}

