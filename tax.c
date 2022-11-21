#include <stdio.h>

int main()
{
int salary,tax = 0;

// TAX BORDERS 
int b1 = 5600000 , b2 = 15000000 , b3 = 25000000 , b4 = 35000000;

printf("ENTER YOUR SALARY : ");
scanf("%d",&salary);

if(salary > b4) tax = (salary - b4)*0.3 + (b4 - b3)*0.2 + (b3 - b2)*0.15 + (b2 - b1)*0.1;
else if(salary > b3) tax = (salary - b3)*0.2 + (b3 - b2)*0.15 + (b2 - b1)*0.1;
else if(salary > b2) tax = (salary - b2)*0.15 + (b2 - b1)*0.1;
else if(salary > b1) tax = (salary - b1)*0.1;
else tax = 0;

printf("YOU HAVE TO PAY : %d ",tax);

return 0;
}