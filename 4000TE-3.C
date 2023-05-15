#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int a,b,c,d;
 printf("Enter value a = ");
 scanf("%d",&a);
 printf("Enter value b = ");
 scanf("%d",&b);
 printf("Enter value c = ");
 scanf("%d",&c);
 printf("Enter value d = ");
 scanf("%d",&d);

 (a>b) ? (a>c) ? (a>d) ? printf("A is maximum"):printf("D is maximum") : (c>d)? printf("C is maximum"): printf("D is maximum")
       : (b>c) ? (b>d) ? printf("B is maximum"):printf("D is maximum") : (c>d)? printf("C is maximum"): printf("D is maximum");
 getch();
}