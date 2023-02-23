//string concatination without using strcat()
#include <stdio.h>
#include <string.h>
int main()
{
char s1[] = "Hello", s2[] =" Let's code";
int i= 0, j = 0;
while(s1[i] != '\0')
i++;
while(s2[j] != '\0')
{
 s1[i] = s2[j];
 i++;
 j++;
}
puts(s1);
return 0;
}
