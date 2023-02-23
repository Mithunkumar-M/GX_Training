//copying a string with a limit without using strncpy
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "Hello World", s2[20];
    int i, n;
    scanf("%d", &n);
    for(i = 0; i != n; i++)
{
    s2[i] = s1[i];
}
    printf("%s", s2);
    return 0;
}
