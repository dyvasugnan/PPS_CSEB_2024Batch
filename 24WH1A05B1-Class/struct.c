struct student{
	char name[20];
	int age;
	int marks
};
struct student read_struct();
int main(){
	struct student s=read_struct();
	printf("%s",s.name);
	printf("%d",s.age);
	printf("%d",s.marks);
	 
}
struct student read_struct(){
	struct student s;
	scanf("%s",s.name);
	scanf("%d",&s.age);
	scanf("%d",&s.marks);
	return s;
}
