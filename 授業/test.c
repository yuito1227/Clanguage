
#include <stdio.h>
int main()
{
	int a;//整数
	int b;//反転済み
	int c;//aの各桁
	int d;//aのコピー
	b=0;
	printf("整数： ");
	scanf("%d", &a);
	for(d=a;d!=0;){
		c=d%10;
		b=b*10+c;
		d/=10;
	}
	if(a==b){
		printf("%dは回文数です。\n",a);
	}else{
		printf("%dは回文数ではありません。\n",a);
	}
}
