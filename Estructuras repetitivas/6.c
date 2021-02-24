#include<stdio.h>
#include<stdlib.h>

int main()

{
float
n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,alump,c,procla,nt;
int i;
c=0;
for (i=1; i=30; i++)
{
printf("ingrese las 10 notas del alumno ",i);
scanf("%f,%f,%f,%f,%f,%f,%f,%f,%f,%f",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
nt=(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10);
printf("el promedio del alumno &d es &f",i,alump);
c=c+nt;
}
procla=c/30;
printf("el promedio de la clase %f",procla);
return 0;
}
