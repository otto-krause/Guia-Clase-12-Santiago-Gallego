#include<stdio.h >
#include <stdlib.h>
int ph(int a, int b)//Igual al ejercicio 2.-
{
int ph;	
ph=a*100/b;
return ph;
}
int pm(int a, int b)
{
int pm;	
pm=a*100/b;
return pm;
}
void main()
{
int h, m, hm;
printf("Ingrese la cantidad de hombres");
scanf("%d",&h);
printf("Ingrese la cantidad de mujeres");
scanf("%d",&m);
hm=h+m;
printf("el porcentaje de hombres postulados es %d\n",ph(h,hm));
printf("el porcentaje de mujeres postuladas es %d\n",pm(m,hm));
}
