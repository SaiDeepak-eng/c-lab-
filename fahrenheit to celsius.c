#include<stdio.h>
int main()
{
	float celcius,fahrenheit;
	printf("Enter temp in fahrenheit");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("Temperature in celsius:%.2f",celsius);
	return 0;
}
#include<stdio.h>
int main()
{
float celsius,farenheit;
printf("Enter temp in celsius :");
scanf("%f",&celsius);
fahrenheit=(1.8*celsius)+32;
printf("Temperature in fahrenheit: %.2f",fahrenheit);
return 0;
}
