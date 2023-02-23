#include <stdio.h>
void pwr_num(int num)
{
  int sum = 0;  
  for(int i = 1; i <= num; i++)
  {
      int pwr = i*i;
      sum = sum + pwr;
      printf("%d ", pwr);
  }
  printf("\n%d", sum);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    pwr_num(num);
    return 0;
}
