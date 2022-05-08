#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("‘ål:");
	scanf("%d",&a);
	printf("q‹Ÿ:");
	scanf("%d",&b);
	printf("‹àŠz:");
	scanf("%d",&c);
	a*=c;
	c/=2;
	if(c % 2){
		c=c+5;
	}
	b*=c;
	printf("‡Œv‹àŠz:%d‰~",a+b);
	return 0;
}
