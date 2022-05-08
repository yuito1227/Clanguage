#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	FILE *fp;
	char player1[10]={"koreto"};
	char player2[10]={"shadow"};
	int yobi[71];
	int a[16];
	int b[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int k, y, l, i, j, d, e, c, z;
	int random;
	char name[16][100];
	char koukan[100];
	fp=fopen("randnumbers.txt","r");
	y=0;
	while(fscanf(fp,"%d",&yobi[y])==1){
		y++;
	}
	fclose(fp);
	c=1;
	while(c==1){
		for(k=0;k<16;k+=2){
			for(d=0;d<2;d++){
				srand((unsigned)time(NULL));
				b[d+k]=rand()%66+1;
				e=1;
				j=0;
				while(e!=j){
					j=0;
					e=0;
					fp=fopen("randnumbers.txt","r");
					while(fscanf(fp,"%d",&random)==1){
						e++;
						if(b[d+k]==random){
							srand((unsigned)time(NULL));
							b[d+k]=rand()%66+1;
						}else{
							j++;
						}
					}
					fclose(fp);
				}
				fp=fopen("randnumbers.txt","a");
				fprintf(fp,"%d\n",b[d+k]);
				fclose(fp);
			}
			fp=fopen("cardlist.txt","r");
			while(fscanf(fp,"%d %s",&a[k], name[k])==2){
				if(a[k]==b[k])break;
				
			}
			fclose(fp);
			fp=fopen("cardlist.txt","r");
			while(fscanf(fp,"%d %s",&a[k+1], name[k+1])==2){
				if(a[k+1]==b[k+1])break;
			}
			fclose(fp);
			if(k>0){
				printf("------------------------------------------------------\n");
				printf("  %-30s%s\n",player1,player2);
				for(l=0;l<k;l+=2){
					printf("%d %-30s%s\n",l/2+1,name[l],name[l+1]);
				}
			}
			l=0;
			while(l==0){
					printf("------------------------%d 組目------------------------\n",k/2+1);
				printf("1 %-30s2 %s\n",name[k],name[k+1]);
				scanf("%d",&c);
				
				if(c==1){
					l++;
				}else if(c==2){
					strcpy(koukan, name[k]);
					strcpy(name[k], name[k+1]);
					strcpy(name[k+1], koukan);
					l++;
				}else{
					printf("1か2を入力してください。\n");
				}
			}
		}
		fclose(fp);
		printf("-------------------------結果-------------------------\n");
		printf("  %-30s%s\n",player1,player2);
		for(l=0;l<k;l+=2){
			printf("%d %-30s%s\n",l/2+1,name[l],name[l+1]);
		}
		z=y;
		fp=fopen("randnumbers.txt","w");
		while(0<z){
			fprintf(fp,"%d\n",yobi[z-1]);
			z--;
		}
		fclose(fp);
		printf("1で続行、2で終了");
		scanf("%d",&c);
		if(c==1||c==2){
		}else{
			printf("1か2を入力してください。\n");
		}
		
	}
}
