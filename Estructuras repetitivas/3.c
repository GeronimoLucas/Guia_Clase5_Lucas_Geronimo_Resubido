#include<stdio.h>
#include<stdlib.h>

int main()
{
int num1,num2,i;
i=0;
printf("ingrese dos numeros ");
scanf("%d",&num1);
scanf("%d",&num2);
for (i=num1;i<=num2; i++)
{
printf("%d",i);
}
return 0;
}
