//comparing a string with limit without using strncmp
#include <stdio.h>
int main()
{
    char s1[] = "Hello World";
    char s2[] = "Hei";
    int i, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
     if(s1[i]==s2[i])
     { 
         if (i == n-1)
         {
         printf("equal");
         }
     }
     else
     {
     printf("not equal");
     break;
     }
    }
    return 0;
}

