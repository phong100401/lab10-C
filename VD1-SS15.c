#include<stdio.h>
main(){
	int i;
	for(i=1;i<=10;i++){
		printf("Square of %d is %d\n",i,squarer(i));
	}
}
squarer(int x){
//	int j;
//	j=x*x;
//	return(j);
    return(x*x);
}
