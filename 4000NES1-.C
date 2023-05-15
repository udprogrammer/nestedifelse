#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 clrscr();
 printf("Enter value A = ");
 scanf("%d",&a);
 printf("Enter value B = ");
 scanf("%d",&b);
 printf("Enter value C = ");
 scanf("%d",&c);
   if(a<b){
     if(a<c){
     printf("A is minimum");
    }
    else{
      printf("C is minimum");
    }
   }
   else
   {
     if(b<c){
      printf("B is minimum");
     }
     else{
     printf("C is minimum");
     }
   }
 getch();
 }
