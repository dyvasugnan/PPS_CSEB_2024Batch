//Percentage of marks
#include<stdio.h>
int main(){
	int sub1, sub2, sub3, sub4, sub5;
	printf("Enter subject marks: ");
	scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
	int sum = sub1 + sub2 + sub3 + sub4 + sub5;
	float avg = sum / 5.0;
	printf("Average: %.2f\n",avg);
	if(avg >= 70)
		printf("Distinction\n");
	else if (avg <70 && avg > 60)
		printf("First class\n");
	else if(avg < 60 && avg > 40)
		printf("Second class\n");
	else
		printf("Failed\n");
		return 0;
}
