#include<stdio.h>
#include<stdlib.h>
int main()
{
int cero,negativo,positivo,numeros,cantidad;
printf("ingrese cantidad ");
scanf("%d",&cantidad);
{
scanf("%d",&cantidad);
printf("ingrese numeros");
scanf("%d",&numeros);

if(numeros>0)
{
positivo +=+1;
}
else
if (numeros<0)
{
negativo +=+1;
}
else
cero+=+1;
printf("cantidad de positivos:%d",&positivo);
printf("cantidad de negativo:%d",&negativo);
printf("cantidad de cero:%d",&cero);
return 0;
}
}
