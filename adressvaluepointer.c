#include<stdio.h>

//Declare a double variable and a double pointer. 
//Assign value 1.23 to the variable. 
//Assign the variable’s address to the pointer. 
//Display value of variable, address of variable, value of pointer, and address of pointer. 

int main(){
	
	double n;
	printf("Enter an integer:");
	scanf("%lf",&n);
	double *p=&n;
	
	printf("Value of value:%f",n);
	printf("\nAdress of value:%u",p);
	printf("\nValue of pointer:%f",*p);
	printf("\nAdress of pointer:%u",&p);
	
	
	return 0;
}
 
