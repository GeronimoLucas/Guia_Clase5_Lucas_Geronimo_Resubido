#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,i2,vent_dia,ven_total,mv,vm,vg,mejor_v;
vm=0;
vg=0;
mv=0;
for(i1=1; i1<=20; i++)
{
vt=0;

for
(i2=1; i2<=15; i2++)
{
printf("Ingrese la venta del %d",i2);
scanf("%d",&ven_dia);
ven_total=ven_total+vent_dia;
if(vm<vent_dia)
{
vm=vent_dia;
mejor_v=i;
}
}
printf("la venta del dia %d es %d",i,vt);
}
printf("la primera venta es %d y la mejor venta fue hecha por el vendedor%d por %d",vg,mejor_v,vm);
return 0;
}

