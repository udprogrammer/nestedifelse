#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c;
  clrscr();
  printf("Enter value a= ");
  scanf("%d",&a);
  printf("Enter value b= ");
  scanf("%d",&b);
  printf("Enter value c= ");
  scanf("%d",&c);

  (a>b)? (a>c)? printf("A is maximum") :printf("C is maximum")
       : (b>c)?printf("B is maximum") :printf("C is maximum");

  getch();
}