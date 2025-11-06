#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b value");
	scanf("%d%d",&a,&b);
	printf("\n1.addtion\n2.subraction\n3.multiplication\n4.division\n5.modulo division");
	printf("\n\n\t enter your choice:");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
	  printf("the additon of %d and %d is:%d",a,b,a+b);
	    break;
	case 2:
	printf("the subraction of %d and %d is:%d",a,b,a-b);
		break;
	case 3:
	printf("the multiplication of %d and %d is :%d",a,b,a*b);
		break;
	case 4:
	printf("the division of %d and %d is :%d",a,b,a/b);
		break;
	case 5:
	printf("the modulo division of %d and %d is :%d",a,b,a%b);
		break;
	printf("\n enter data properly");
		break;
	return 0;
	}
}
