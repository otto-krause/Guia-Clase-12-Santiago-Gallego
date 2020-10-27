#include<stdio.h >
#include <stdlib.h>
int N()
{
int n;
printf("Ingrese un numero");
scanf("%d",&n);
return (n);
}
int N1()
{
int n1;
printf("Ingrese el segundo numero");
scanf("%d",&n1);
return(n1);
}
void main()
{
int n, n1;
n = N();
n1= N1();
printf("los numeros ingresados son %d\n",n);
printf("los numeros ingresados son  %d\n",n1);
}
