//hackerrank problem
//by giving arguments as pointer,size of array(no.of students),char (gender)
// giving the gender as g resembles the sum of girls marks stored at odd index
//giving the gender as b resembles the sum of boys marks stored in even index
#include<stdio.h>
#include <stdlib.h>
int marks_summation(int*,int,char);
int main(){int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int  a= 0;a < number_of_students; a++) {
        scanf("%d", (marks + a));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;

}
int marks_summation(int* marks, int number_of_students, char gender) {
    
    
int sum=0;
  if(gender=='b'){
      for(int i=0;i<number_of_students;i=i+2){
          sum+=marks[i];
      }
    return sum;
  }
  else{
      for(int i=1;i<number_of_students;i=i+2){
          sum+=marks[i];    
      }
    return sum;
  }
}
