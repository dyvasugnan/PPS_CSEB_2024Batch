//write a program to update the data of student 
#include<stdio.h>
struct student{
char name[20];
int age;
};
struct student update_data(struct student);
int main(){
struct student s;
printf("enter any name");
scanf("%s",s.name);
printf("enter age of student");
scanf("%d",&s.age);
struct student s1=update_data(s);
printf("%s",s1.name);
printf("%d",s1.age);
return 0;
}
struct student update_data(struct student s){
s.name[0]=s.name[0]-32;
s.age=s.age+1;
return s;
}
