#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(int argc, const char * argv[])
{
     
    // insert code here...
     
    // ���݂����̓��e�ꗗ
    char daikichi[] = "��g";
    char tyuukichi[] = "���g";
    char syoukichi[] = "���g";
    char kichi[] = "�g";
    char kyou[] = "��";
     
    // �e���݂����̓��e���i�[����|�C���^�z��
    char *mikuji[5];
    mikuji[0] = daikichi;
    mikuji[1] = tyuukichi;
    mikuji[2] = syoukichi;
    mikuji[3] = kichi;
    mikuji[4] = kyou;
     
    // ���ݎ�������ɐݒ肷��
    srand((unsigned)time(NULL));
     
    // 0����4�܂ł̗������擾����
    double randValue;
    randValue = rand() / (double)(unsigned)(RAND_MAX + 1);
    int mikujiNum = (int)(randValue * 5.0);
     
    // ���݂����̓��e��\������
    printf("�{���̂��Ȃ��̉^���� %s �ł��B", mikuji[mikujiNum]);
     
     
    return 0;
}