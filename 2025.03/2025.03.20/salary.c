/*Write a C program to generate salary of employees:
· Uses a loop to calculate salary for multiple employees.
· Takes basic salary as input.
· Uses if-else to calculate HRA, DA, and PF:
If basic salary > ₹50000, HRA = 20%, DA = 25%, PF
=12%.
Else, HRA =15%, DA=20%, PF=10%.
Gross Salary = Basic Salary + HRA + DA
Net Salary = Gross Salary - PF
Uses switch case to categorize salary:
₹80000-100000 -> "High Salary"
₹50000-₹80000 -> "Medium Salary"
<₹50000 -> "Low Salary"*/
#include <stdio.h>
int main()
{
	int n, id;
	float basic, hra, da, pf, gross, net;
	printf("Enter the no. of employees: ");
	scanf(" %d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("\nFor Employee #%d\n", i);
		printf("Please enter your Employee ID: ");
		scanf(" %d", &id);
		printf("Enter your basic salary: ");
		scanf(" %f", &basic);

		if (basic >= 50000)
		{
			hra = .20 * basic;
			da = .25 * basic;
			pf = .12 * basic;
		}
		else
		{
			hra = .15 * basic;
			da = .20 * basic;
			pf = .10 * basic;
		}
		gross = basic + hra + da;
		net = gross - pf;

		printf("\nSalary Details for Employee #%d (ID: %d)\n", i, id);
		printf("Basic Salary: Rs %8.2f\n", basic);
		printf("HRA: Rs %8.2f\n", hra);
		printf("DA: Rs %8.2f\n", da);
		printf("PF: Rs %8.2f\n", pf);
		printf("Gross Salary: Rs %8.2f\n", gross);
		printf("Net Salary: Rs %8.2f\n", net);
		
		printf("Your salary comes under: ");
		int cat=net/10000;
		switch(cat)
		{
			case 10:
			case 9:
			case 8:
				printf("High Salary");
				break;
			case 7:
			case 6:
			case 5:
				printf("Medium Salary");
				break;
			default:
				printf("Low Salary");
				break;
		}
	}
	return 0;
}