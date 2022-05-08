#include<stdio.h>
int main(void)
{
	double a,b;
	int c;
	c=1;
	while(c==1){
		puts("「身長 体重」の順番で入力してください。");scanf("%lf %lf",&a,&b);
		if(a<=0||b<=0){
			puts("正しい値を入力してください。");
			puts(" ");
		}else{
			c=0;
			a=a/100;
			a=b/a/a;
			printf("あなたのBMIは%.1lfで、評価は",a);
			if(a<18.5){
				puts("「やせ」です。");
			}else if(a<25){
				puts("「普通」です。");
			}else if(a<30){
				puts("「肥満度 1」です。");
			}else if(a<35){
				puts("「肥満度 2」です。");
			}else if(a<40){
				puts("「肥満度 3」です。");
			}else{
				puts("「肥満度 4」です。");
			}
		}
	}
	return 0;
}
