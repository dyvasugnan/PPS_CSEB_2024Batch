//addition using function
int sumofnumbers(int,int);
int main(){
	int n1,n2,sum;
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
	sum=sumofnumbers(n1,n2);
	printf("sum=%d",sum);
	return 0;
}
int sumofnumbers(int n1,int n2){
	return n1+n2;
}
