#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("��l:");
	scanf("%d",&a);
	printf("�q��:");
	scanf("%d",&b);
	printf("���z:");
	scanf("%d",&c);
	a*=c;
	c/=2;
	if(c % 2){
		c=c+5;
	}
	b*=c;
	printf("���v���z:%d�~",a+b);
	return 0;
}
