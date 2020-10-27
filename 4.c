#include<stdio.h >
#include <stdlib.h>
int p(int a, int b)
{
int p;	
p=a/b;
return p;
}
void main()
{
int f, a;
printf("ingresar la fuerza");
scanf("%d",&f);
printf("ingrese el area");
scanf("%d",&a);
printf("la presion en la superfice es %d\n",p(f,a));
}
