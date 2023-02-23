#include <stdio.h>
#include <math.h>
void num_power(int x, int y)
{
    int np;
    np = pow(x, y);
    printf("%d", np);
}
int main()
{
    int x, n;
    printf("Enter the numbers: ");
    scanf("%d %d", &x, &n);
    num_power(x, n);
}
