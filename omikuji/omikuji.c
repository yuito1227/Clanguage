#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(int argc, const char * argv[])
{
     
    // insert code here...
     
    // おみくじの内容一覧
    char daikichi[] = "大吉";
    char tyuukichi[] = "中吉";
    char syoukichi[] = "小吉";
    char kichi[] = "吉";
    char kyou[] = "凶";
     
    // 各おみくじの内容を格納するポインタ配列
    char *mikuji[5];
    mikuji[0] = daikichi;
    mikuji[1] = tyuukichi;
    mikuji[2] = syoukichi;
    mikuji[3] = kichi;
    mikuji[4] = kyou;
     
    // 現在時刻を種に設定する
    srand((unsigned)time(NULL));
     
    // 0から4までの乱数を取得する
    double randValue;
    randValue = rand() / (double)(unsigned)(RAND_MAX + 1);
    int mikujiNum = (int)(randValue * 5.0);
     
    // おみくじの内容を表示する
    printf("本日のあなたの運勢は %s です。", mikuji[mikujiNum]);
     
     
    return 0;
}