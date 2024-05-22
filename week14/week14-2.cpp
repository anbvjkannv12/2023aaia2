#include <stdio.h>
int main()
{
    char c;
    char s[100];
    printf("請輸入一行字，裡面可以有空格，直到跳行結束:");
    gets(s);
    printf("你讀入了:%s\n",s);
    printf("請輸入你的英文名子，裡面不能有空格: ");
    scanf("%s",s);
    printf("你的英文名子是:%s",s);
    printf("請再輸入一次你的英文名子:");
    scanf("%c",&c);
    printf("結果讀到了:%c",c);
}
