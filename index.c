#include <stdio.h>
#include <stdlib.h>

int g_val2;
int g_val1 = 100;

int main()
{
    printf("code:%p\n", main);
    const char *str1 = "hello world";
    const char *str2 = "hello world";

    printf("static readonly:%p\n", str1);
    printf("static readonly2:%p\n", str2);
    printf("static readonly3:%p\n", "hello world");

    printf("init global val:%p\n", &g_val1);
    printf("uninit global val:%p\n", &g_val2);

    int *p = (int *)malloc(sizeof(int) * 10);
    printf("heap:%p\n", p);

    printf("stack:%p\n", &str1);
    printf("stack:%p\n", &str2);
    printf("stack:%p\n", &p);

    return 0;
}