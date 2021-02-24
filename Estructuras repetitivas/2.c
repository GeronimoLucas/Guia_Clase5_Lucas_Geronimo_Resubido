#include<stdio.h>;
#include<stdlib.h>;

int main()
{
int i;
float num1,num2,mayor,pro,total;
num2=0;
mayor=0;
for(i=1; i<=15; i++)
{
printf("ingrese un numero");
scanf("%d",&num1);
total=total+num1;
mayor=mayor+num1;
if(num1>num2)
{
num2=num1;

}
}
pro=total/15;
printf("el promedio es %f",pro);
printf("el numero mayor es %f",num2);
return 0;
}
