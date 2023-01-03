#include<math.h>
#include<stdio.h>
#include<conio.h>
int nbr ;
void main()
{
 printf("entrer un nbr= ");
 scanf("%d",&nbr);
 if(nbr<0)
 {
 nbr=nbr*(-1);
 }
 printf("absolu=%d",nbr);
 getch();
}

