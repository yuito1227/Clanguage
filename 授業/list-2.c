#include<stdio.h>
int main(void)
{
	int a, b;
	printf("金額を入力してください:"); scanf("%d",&a);
	b=a/10000;
	a=a-10000*b;
	printf("10000円札:%d枚\n",b);
	b=a/5000;
	a=a-5000*b;
	printf("5000円札:%d枚\n",b);
	b=a/1000;
	a=a-1000*b;
	printf("1000円札:%d枚\n",b);
	b=a/500;
	a=a-500*b;
	printf("500円玉:%d枚\n",b);
	b=a/100;
	a=a-100*b;
	printf("100円玉:%d枚\n",b);
	b=a/50;
	a=a-50*b;
	printf("50円玉:%d枚\n",b);
	b=a/10;
	a=a-10*b;
	printf("10円玉:%d枚\n",b);
	b=a/5;
	a=a-5*b;
	printf("5円玉:%d枚\n",b);
	printf("1円玉:%d枚\n",a);
	return 0;
}
