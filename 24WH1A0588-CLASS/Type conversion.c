#include <stdio.h>

int main()

{

}

int x = 10;

char y = 'a';

x = x + y;

float z = x + 1.0;

printf("Implicit type conversion\n");

printf("x = %d, z = %f", x, z);

return 0;

//explicit type conversion

#include<stdio.h>

int main()

{

}



double x = 1.2;

int sum = (int)x + 1;

printf("sum = %d",sum);
return 0;
