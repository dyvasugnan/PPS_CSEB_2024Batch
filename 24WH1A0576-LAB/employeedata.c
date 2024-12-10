//data of employee using structures
#include<stdio.h>
struct employee{
char name[40];
int employee_id;
float basic_salary;
float da;
float hra;
float income_tax;
float pf;
}; 
int main(){
struct employee e;
float netsalary;
printf("enter name\n");
scanf("%s",e.name);
printf("enter id of employee\n");
scanf("%d",&e.employee_id);
printf("enter basic salary\n");
scanf("%f",&e.basic_salary);
printf("enter da\n");
scanf("%f",&e.da);
printf("enter hra\n");
scanf("%f",&e.hra);
printf("enter income tax\n");
scanf("%f",&e.income_tax);
netsalary=e.basic_salary+e.da+e.hra-(e.income_tax+e.pf);
printf("name of employee =%s\n",e.name);
printf("employee id=%d\n",e.employee_id);
printf("basic salary=%.2f\n",e.basic_salary);
printf("netsalary=%.2f\n",netsalary);
return 0;
}
