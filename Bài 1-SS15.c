#include<stdio.h>
float dientich(float x){
	float dientich;
	dientich=x*x*3.14;
	return dientich;
}
float chuvi(float y){
	float chuvi;
	chuvi=2*y*3.14;
	return chuvi;
}
float main(){
	float r;
	float a,b;
	printf("Enter r: ");
	scanf("%f",&r);
	//pr=&r;
	a=dientich(r);
	printf("dien tich hinh tron la %f\n",a);
	b=chuvi(r);
	printf("chu vi hinh tron la %f\n",b);
	return 1;
}


