#include <stdio.h>
#include <stdlib.h>



int add(void);
void main(
{
   int s=0 ;

   printf("%d" , s);
   s = add();
   printf("sum is %d",s);

}
int add()
{
int a = 0,b = 0,c = 0;
printf("enter two numbers\n");
scanf("%d %d",&a,&b);
c=a+b;

return(c);
}
