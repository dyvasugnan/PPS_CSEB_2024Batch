//updating information using structures in function
#include<stdio.h>
struct student{
     char name[20];
     int age;
};
struct student update_info(struct student);
int main(){
struct student s;
printf("enter name");
scanf("%s",s.name);
printf("enter age");
scanf("%d",&(s.age));
 s = update_info(s);
printf("%s",s.name);
printf("%d",s.age);
return 0;
}
struct student update_info(struct student s){
int i;
for(i = 0;s.name[i]!='\0';i++){
if(i==0)
s.name[i]=s.name[i]-32;
}
s.age=s.age+1;
return s;
}
