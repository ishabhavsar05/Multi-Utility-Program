//Write a program to find the third angle of a right triangle when two other angles are given.

#include<stdio.h>
#include<conio.h>

main()
{
	int angle1;
	printf("enter the value of angle1:");
	scanf("%d",&angle1);
	
	int angle2;
	printf("\nenter the value of angle2:");
	scanf("%d",&angle2);
	
	int angle3=180-(angle1+angle2);
	printf("\nangle3 is :%d",angle3);
	
	
    
    
    
	
}
