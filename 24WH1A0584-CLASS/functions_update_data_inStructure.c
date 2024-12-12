//updating student data:capitalizing name and incrementing age//
#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int age;
};
struct student update_data(struct student);
int main(){
    struct student s;
    printf("Enter your name\n");
    scanf("%s",s.name);
    printf("Enter your age\n");
    scanf("%d",&s.age);
    struct student stu=update_data(s);
    printf("Name:%s\n",stu.name);
    printf("Age:%d\n",stu.age);
    return 0;
}
struct student update_data(struct student stu){
    stu.age=stu.age+1;
    if(stu.name[0]>='a'&& stu.name[0]<='z')
        stu.name[0]-=32;
    return stu;
    
}