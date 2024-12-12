#include<stdio.h>
#include<ctype.h>
struct student{
    char name[20];
    int age;
    }s1;
    struct student updatedata(struct student);
    int main(){
        printf("enter the studentname:\n");
        scanf("%s",s1.name);
        printf("enter the student age:\n");
        scanf("%d",&s1.age);
        struct student stu=updatedata(s1);
        printf("%s\n",stu.name);
        printf("%d\n",stu.age);
        return 0;
      }
      struct student updatedata(struct student s1){
          s1.name[0];toupper (s1.name[0]);
          s1.age+=1;
          return s1;
      }

