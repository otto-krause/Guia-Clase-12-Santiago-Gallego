#include<stdio.h >
#include <stdlib.h>
int NM(int a, int b)
{
int NM;
if(a<b)
{
NM=b;
}
else
{
NM=a;
}
return (NM);
}
void main()
{
int n=0,n1=0;
printf("ingresar un numero");
scanf("%d",&n);
printf("Ingrese otro numero");
scanf("%d",&n1);
if(n=n1)
{
	printf("son iguales");	
}
else 
{
	printf("el mayor numero es %d",NN(n, n1));
}
}
