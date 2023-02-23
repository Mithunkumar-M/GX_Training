#include<stdio.h>
#include<string.h>
void display_name(char **stu, int ind)
{
   printf("%s\n", stu[ind]);
}
void vowel_count(char **stu, int ind)
{
   int i = 0, count = 0;
   while(stu[ind][i]!= '\0')
   {
       if(stu[ind][i]=='a'|| stu[ind][i]=='A'|| stu[ind][i]=='e'|| stu[ind][i]=='E'|| stu[ind][i]=='i'|| stu[ind][i]=='I'||
       stu[ind][i]=='o'|| stu[ind][i]=='O'|| stu[ind][i]=='u'|| stu[ind][i]=='U')
       {
         count++;
       }
       i++;
   }
   printf("vowel count: %d\n", count);
}

void longest_name(char **stu)
{
   int max= 0, ind= 0;
   for(int i= 0; i< 10; i++)
   {
       int value= strlen(stu[i]);
       if(max< value)
       {
           max= value;
           ind= i;
       }
   }
   printf("longest name: %s\n", stu[ind]);
}
void aa_name(char **stu)
{
   printf("a_a name: ");
   for(int i = 0; i < 10; i++)
   {
      if((stu[i][0]=='a')||(stu[i][0]=='A'))
      {
         int n = strlen(stu[i]);
         if(stu[i][n-1]=='a'||stu[i][n-1]=='A')
         {
              printf("%s\n", stu[i]);
         }
      }
   }
}
int main()
{
int ind;
char *students[10][20] = { "Aakash", "Anirudha", "Vikas", "Vinay", "Rakesh", "Thomas", "Jerry", "Alekha", "Daksh", "Peter"};
printf("Enter the index: ");
scanf("%d", &ind);
display_name(*students, ind);
vowel_count(*students, ind);
longest_name(*students);
aa_name(*students);
return 0;
}

