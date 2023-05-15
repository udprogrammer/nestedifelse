#include<stdio.h>
#include<conio.h>
main()
{
  int a,b;
  clrscr();
  printf("Enter value A = ");
  scanf("%d",&a);
  printf("Enter value B = ");
  scanf("%d",&b);
  (a>b)? printf("A is maximum") : printf("B is maximum");
  getch();
}