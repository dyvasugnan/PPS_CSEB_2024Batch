//printing math table
#include <stdio.h>
int main()
{
int n,r;
printf("Enter an integer: ");
scanf("%d", &n);
printf("Enter the number of rows: ");
scanf("%d",&r);
for (int i = 1; i <= r; ++i)
{
printf("%d x %d = %d \n", n, i, n * i);
}
return 0;
}
