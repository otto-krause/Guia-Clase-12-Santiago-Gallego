#include<stdio.h >
#include <stdlib.h>
int rt(int a,int b,int c,int d,int e)
{
int rt;	
rt=a+b+c+d+e;
return rt;
}
void main()
{
int r1,r2,r3,r4,r5;
printf("ingresar las 5 resistencias");
scanf("%d",&r1);
scanf("%d",&r2);
scanf("%d",&r3);
scanf("%d",&r4);
scanf("%d",&r5);
printf("r1=%d\n",r1);
printf("r2=%d\n",r2);
printf("r3=%d\n",r3);
printf("r4=%d\n",r4);
printf("r5=%d\n",r5);
printf("rt es igual a %d\n",rt(r1,r2,r3,r4,r5));
}
