#include<stdio.h>
int main(void)
{
	double a,b;
	int c;
	c=1;
	while(c==1){
		puts("�u�g�� �̏d�v�̏��Ԃœ��͂��Ă��������B");scanf("%lf %lf",&a,&b);
		if(a<=0||b<=0){
			puts("�������l����͂��Ă��������B");
			puts(" ");
		}else{
			c=0;
			a=a/100;
			a=b/a/a;
			printf("���Ȃ���BMI��%.1lf�ŁA�]����",a);
			if(a<18.5){
				puts("�u�₹�v�ł��B");
			}else if(a<25){
				puts("�u���ʁv�ł��B");
			}else if(a<30){
				puts("�u�얞�x 1�v�ł��B");
			}else if(a<35){
				puts("�u�얞�x 2�v�ł��B");
			}else if(a<40){
				puts("�u�얞�x 3�v�ł��B");
			}else{
				puts("�u�얞�x 4�v�ł��B");
			}
		}
	}
	return 0;
}
