//using the struct in the function 
#include<stdio.h>
void display_student(struct student);
int main(){
    struct student{
	char name[100];
	int age;
	float marks;
	}s={"rani",18,900};
  display_student(stu);
  return 0;
  }
  void display_student(struct student  stu){
     struct student stu;
	 printf("%s%d%d",stu.name,stu.age,stu.marks);
	  }
