/* arithmetic operator
  * / %
  - +
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	float x;
	printf("enter two num:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\n add:%d",c);
	c=a-b;
	printf("\n sub:%d",c);
	c=a*b;
	printf("\n mul:%d",c);
	x=a/b;
	printf("\n div:%0.2f",x);
	c=a%b;
	printf("\n mod:%d",c);
	printf("\nenter the num to square:");
	scanf("%d",&a);
	c=a*a;
	printf("\nthe squared number is :%d ",c);

	return 0;
}
