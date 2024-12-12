//updating data
#include<stdio.h>
struct student{
     char name[20];
     int age;
    };
struct student update_data(struct student);
int main(){
   struct student s;
      printf("enter name\n");
      scanf("%s",s.name);
      printf("enter age\n");
      scanf("%d",&s.age);
  struct student s1=update_data(s);
     printf("%s\n",s1.name);
     printf("%d\n",s1.age);
       return 0;
}
struct student update_data(struct student s){
       int i=0;
     for(i=0;s.name[i]!='\0';i++){
         if(i==0){
             s.name[i]=s.name[i]-32;}
         else
             s.name[i]=s.name[i];}
       s.age=s.age+1;
     return s;}
