#include<stdio.h>
#include<math.h>
int main(void)
{
	//a=���ꂼ��̓_��, b=�l��, c=���[�v�p
	//d=���ϓ_, you=�΍��l
	//e=���ςƂ̍��̍��v, f=�W���΍�
	int a[49],b ,c1, c, c3, e[49];
	double f, you2, you, d;
	c1=1;
	d=0;
	f=0;
	while(c1==1){
		printf("���k�̐l��:");
		scanf("%d",&b);
		if(b<=50){
			c1=0;
		}else{
			puts("���k�̐l����50�ȉ��ł����Ή����Ă܂���B");
		}
		for(c=0;c<b;c++){
			printf("%2d�Ԃ̓_��:",c+1);
			scanf("%d",&a[c]);
			d+=a[c];
		}
		d=d/b;
		puts(" ");
		printf("���Ȃ��̓_��:");
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
		printf("���Ȃ��̕΍��l��%.1lf�ł�",you);
	}
	return 0;
}
