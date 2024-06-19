//Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
//formula: °F = (9/5 × °C) + 32

#include<stdio.h>
#include<conio.h>

main()
{
	int C;
	float F;
	
	printf("Enter the value of C:");
	scanf("%d",&C);
	
	F = (9/5 * C) + 32;
	printf("%.2f",F);
}
