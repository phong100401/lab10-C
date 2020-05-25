#include<stdio.h>
main(){
	int a,b,c;
	a=b=c=0;
	printf("Enter 1st integer :");
	scanf("%d",&a);
	printf("Enter 2nd integer :");
	scanf("%d",&b);
	c=adder(a,b);
	printf("a&b in main() are : %d, %d\n",a,b);
	printf("c in main() is: %d\n",c);
}
adder(int a, int b){
	int c;
	c=a+b;
	a *= a;
	b +=5;
	printf("a&b within adder function are: %d, %d\n",a,b);
	printf("c within adder function is: %d\n",c);
	return(c);
}
