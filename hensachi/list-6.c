#include<stdio.h>
#include<math.h>
int main(void)
{
	//a=それぞれの点数, b=人数, c=ループ用
	//d=平均点, you=偏差値
	//e=平均との差の合計, f=標準偏差
	int a[49],b ,c1, c, c3, e[49];
	double f, you2, you, d;
	c1=1;
	d=0;
	f=0;
	while(c1==1){
		printf("生徒の人数:");
		scanf("%d",&b);
		if(b<=50){
			c1=0;
		}else{
			puts("生徒の人数は50以下でしか対応してません。");
		}
		for(c=0;c<b;c++){
			printf("%2d番の点数:",c+1);
			scanf("%d",&a[c]);
			d+=a[c];
		}
		d=d/b;
		puts(" ");
		printf("あなたの点数:");
		scanf("%lf",&you);
		you2=(d-you);
		if(you2<0){
			you2=you2*(-1);
		}
		for(c=0;c<b;c++){
			e[c]=(d-a[c])*(d-a[c]);
			f+=e[c];
		}
		f=sqrt(f/b);
		f=you2*10/f;
		if(you<d){
			you=50-f;
		}else if(you>d){
			you=50+f;
		}else{
			you=50;
		}
		printf("あなたの偏差値は%.1lfです",you);
	}
	return 0;
}
