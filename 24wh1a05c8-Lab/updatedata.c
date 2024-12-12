#include<stdio.h>
#include<string.h>

struct student{
		char name[20];
		int age;

	};

struct student updatedata(struct student stu){
		
		stu.age++;
			if(stu.name[0] >= 'a' && stu.name[0] <= 'z')
				stu.name[0] -= 32;

		return stu;
	}

int main(){
		struct student s1;

		printf("Enter name: ");
		scanf("%s", s1.name);

		printf("Enter age: ");
		scanf("%d", &s1.age);

		struct student s2 = updatedata(s1);

		printf("\nUpdated name: %s\n", s2.name);
		printf("Updated age: %d\n", s2.age);

		return 0;

	}
