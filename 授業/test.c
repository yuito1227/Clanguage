
#include <stdio.h>
int main()
{
	int a;//����
	int b;//���]�ς�
	int c;//a�̊e��
	int d;//a�̃R�s�[
	b=0;
	printf("�����F ");
	scanf("%d", &a);
	for(d=a;d!=0;){
		c=d%10;
		b=b*10+c;
		d/=10;
	}
	if(a==b){
		printf("%d�͉񕶐��ł��B\n",a);
	}else{
		printf("%d�͉񕶐��ł͂���܂���B\n",a);
	}
}
