#include <stdio.h>
int add(int a1, int b1);
int main()
{
   int sum=0,a,b;
   printf("Enter two numbers:\n");
   scanf("%d%d",&a,&b);
   sum = add(a,b);
   printf("Sum is : %d" ,sum);
return 0;
}
int add(int a1, int b1)
 {
    return(a1+b1);
 }


