#include<stdio.h>
int main(){
int marks;
printf("\n Enter Marks between 0-100:");
scanf("%d", & marks);
if (marks >= 70)
{
printf("\n You got Distinction");
}
else if (marks >= 60)
{
printf("\n You got First Class");
}
else if (marks >= 40)
{
printf("\n You got Second Class");
}
else
{
printf("\n You got Failed");}
return 0;}