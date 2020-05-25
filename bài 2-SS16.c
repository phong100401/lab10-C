#include<stdio.h>
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Giai thua %d is %d\n",n,giaithua(n));
}
int giaithua(int x){
	int i;
	int a=1;
	for(i=1;i<=x;i++){
		a*=i;
	}
    return a;
}
	
