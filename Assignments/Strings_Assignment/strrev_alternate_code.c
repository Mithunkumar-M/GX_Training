//string reverse without using strrev()
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Hello World";
    char s2[30];
    int i=0, j = strlen(s1)-1;
    while(j >= 0 )
    {
        s2[i++] = s1[j--];
    }
    printf("%s", s2);
    return 0;
}
