#include<stdio.h>

struct student{

char name[20];

int age;

}s;
 struct student update_student_info(struct student);
 
 int main(){

  struct student s; 
  
  scanf("%s",s.name);
   
    scanf("%d",&s.age);
 
   s= update_student_info(s);

printf("%s \n",s.name);

printf("%d",s.age);
 
 return 0;
}
struct student update_student_info(struct student stu){
 
 int i;

for(i=0;stu.name[i]!='\0';i++){

if(i ==0)

 stu.name[i]=stu.name[i]-32;
 
 }
 
  stu.age =stu. age+1;
  
   return stu ;

    }