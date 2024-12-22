#include<stdio.h>
struct student{
       char name[20];
       int age;
};
struct student update(struct student);
int main() {
	struct student s;
	scanf("%s",s.name);
	scanf("%d",&s.age);
	struct student s1=update(s);
	printf("%d",s1.age);
	printf("%s",s1.name);
	return 0;
}
struct student update(struct student s){
	s.name[0]=s.name[0]-32;	
	s.age=s.age+1;
	return s;
}
