//using structure in the function
//structure of two members name and age
//write a function such that i will increment age by 1 and first letter
#include<stdio.h>
struct student{
    char name[30];
	int age;
	};
struct student s;
struct student update(struct student);
int main(){
   printf("enter values of the struct mem \n");
   scanf("%s %d",s.name,&s.age);
   struct student s1=update(s);
   printf("updated info\n");
   printf("%s\n %d",s1.name,s1.age);
   return 0;
   }
   struct student update(struct student stu){
     stu.age=stu.age+1;
	 if(stu.name[0]>=96 && stu.name[0]<=122){
	          stu.name[0]=stu.name[0]-32;
			    }
      else{
	   stu.name[0]=stu.name[0];
	     }
	return stu;

	}

       
