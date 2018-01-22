#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,power=1,i=1;
  printf(" Enter the number=");
  scanf("%d",&a);
  printf(" Enter the power value=");
  scanf("%d",&b);
  for(i=1;i<=b;i++)
  {
  power=power*a;
  }
  printf("squre value =%d",power);
  getch();
}
