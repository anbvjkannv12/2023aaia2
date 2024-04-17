#include <stdio.h>
#include <string.h>///要使用字串的函式
int main()
{
    char line[100];
    printf("請輸入一堆字母，不要有空格，最後跳行結束輸入\n");
    scanf("%s",line);
    int N =strlen(line);
    printf("字串的長度是:%d",N);
    ///strcpy(a,"hellow");字串拷貝string copy
    ///strcat(a,b);字串結合，把右邊b按到左邊a的後面string concatenate
    ///strcmp(a,b);字串比較(逐字母比較，ㄎㄢ
}
