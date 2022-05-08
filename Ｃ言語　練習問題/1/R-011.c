#include<stdio.h>
int main(void)
{
	int a, b, c, g;
	printf("国語の点数＝");
	scanf("%d",&a);
	printf("社会の点数＝");
	scanf("%d",&b);
	printf("理科の点数＝");
	scanf("%d",&c);
	g=a+b+c;
	printf("合計＝%d",g);
	g/=3;
	printf("平均＝%d",g);
	return 0;
}
