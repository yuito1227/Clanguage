#include<stdio.h>
int main(void)
{
	int a, b;
	printf("�b��:");
	scanf("%d",&a );
	printf("%d�b��",a);
	if(a==0){
		printf("0�b");
	}
	else if(a>=3600){
		b=a/3600;
		printf("%d����",b);
		a-=b*3600;
	}
	if(a>=60){
		b=a/60;
		printf("%d��",b);
		a-=b*60;
	}
	if(a==0){
		
	}else{
		printf("%d�b",a);
	}
	printf("�ł��B");
	return 0;
}
