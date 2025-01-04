//converting decimal to roman number
#include<stdio.h>
#include<math.h>
int main(){
int a[]={1,4,5,9,10,40,50,90,100,400,500,900,1000},count=0,temp,num,q,i;
char roman[13][3]={"I","IV","V","IX","X","XL","L","XC","C","XD","D","XM","M"};
printf("enter any number");
scanf("%d",&num);
for(i=0;i<13;i++){
	if(a[i]==num){
		printf("%s",roman[i]);
	}
}
temp=num;
while(num!=0){
	num=num/10;
	count=count+1;
}
while(temp!=0){
	q=temp/pow(10,(count-1));
	for(i=0;i<13;i--){	
	if(q*pow(10,count-1)==a[i]){
		printf("%s",roman[i]);
	}
	if(pow(10,count-1)==a[i]){
	while(q>0){
	printf("%s",roman[i]);
	q--;
  }
  }
  }
  temp= temp % (int)pow(10,(count-1));
  count--;                 
}

}
