//structures on student data
#include<stdio.h>
#include<string.h>
struct student{
char name[40];
char roll_no[10];
float marks[6];
};
int main(){
struct student s;
float avg,perc,sum=0;
printf("enter student name:\n");
scanf("%s",s.name);
printf("enter roll number:\n");
scanf("%s",s.roll_no);
int i;
for(i=0;i<6;i++){
printf("\nenter marks of subject %d:",i+1);
scanf("%f",&s.marks[i]);
sum+=s.marks[i];
}
printf("name of student:%s\n",s.name);
printf("Roll number:%s\n",s.roll_no);
avg=sum/6;
printf("average of %s=%f\n",s.name,avg);
perc=(sum/300)*100;
printf("percentage of %s=%f\n",s.name,perc);
return 0;
}
