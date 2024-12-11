#include<stdio.h>
#include<ctype.h>
struct student{
    char name[20];
    int age;
    }s1;
    struct student UpdateData(struct student);
    int main(){
        printf("Enter the student's name: \n");
        scanf("%s",s1.name);
        printf("Enter the student's age :\n");
        scanf("%d",&s1.age);
        struct student stu=UpdateData(s1);
        printf("%s\n",stu.name);
        printf("%d\n",stu.age);
        return 0;
    }
    
    struct student UpdateData( struct student s1){
        s1.name[0]=toupper (s1.name[0]);
        s1.age+=1;
        return s1;
    }
