//converting roman into numerical
#include <stdio.h>
#include <string.h>
void main()
{
int a[100],i,j,k,len;
char roman[100];
printf(“Enter roman value\n”);
gets(roman);
len = strlen(roman);
for(i=0;i<len;i++)
{
if(roman[i] == ‘I’)
a[i] = 1;
else if (roman[i] == ‘V’)
a[i] = 5;
else if(roman[i] == ‘X’)
a[i] = 10;
else if(roman[i] == ‘L’)
a[i] = 50;
else if(roman[i] == ‘C’)


 a[i] = 100;
else if(roman == ‘D’)
a[i] = 500;
else if(roman == ‘M’)
a[i] = 100
else{

printf(“Invalid choice”);
k = a[len-1];
for(j = len-1;j>0;j--)
{
if(a[j]>a[j-1])
k = k – a[j-1];
else
if(a[j] == a[j-1] || a[j] < a[j-1])
k = k+a[j-1];
}
printf(“%d”,k);
}

