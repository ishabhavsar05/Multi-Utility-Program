//Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
//the base salary as chosen by the user.

#include<stdio.h>
#include<conio.h>

main()
{
	int basesalary;
	int HRA=10;
	int DA=5;
	int TA=8;
	int ans;
	
	printf("Enter the basesalary:");
	scanf("%d",&basesalary);
	
	HRA=basesalary*10/100;
	DA=basesalary*5/100;
	TA=basesalary*8/100;	
	ans=basesalary+HRA+DA+TA;
	printf("%d",ans);
}
