#include <stdio.h>
int main()
{
	int a,b,intSum,intDiff;
	float x,y,floatSum,floatDiff;
	printf("Enter two intger numbers:");
	scanf("%d%d",&a,&b);
	intSum=a+b;
	intDiff=a-b;
	floatSum=x+y;
	floatDiff=x-y;
	printf("\n--- Result---\n");
	printf("Intger sum=%d\n",intSum);
	printf("Intger Difference=%d\n",floatDiff);
	printf("floatSum+%.2f\n",floatSum);
	printf("float Difference=%.2f\n",floatDiff);
	return 0;
}
