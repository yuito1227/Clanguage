#include<stdio.h>
int main(void)
{
	int a, b;
	printf("���z����͂��Ă�������:"); scanf("%d",&a);
	b=a/10000;
	a=a-10000*b;
	printf("10000�~�D:%d��\n",b);
	b=a/5000;
	a=a-5000*b;
	printf("5000�~�D:%d��\n",b);
	b=a/1000;
	a=a-1000*b;
	printf("1000�~�D:%d��\n",b);
	b=a/500;
	a=a-500*b;
	printf("500�~��:%d��\n",b);
	b=a/100;
	a=a-100*b;
	printf("100�~��:%d��\n",b);
	b=a/50;
	a=a-50*b;
	printf("50�~��:%d��\n",b);
	b=a/10;
	a=a-10*b;
	printf("10�~��:%d��\n",b);
	b=a/5;
	a=a-5*b;
	printf("5�~��:%d��\n",b);
	printf("1�~��:%d��\n",a);
	return 0;
}
