#include<stdio.h>

main(){
	float r;
	const float pi=3.14; 
	
	printf("Enter radius of a circle:");
	scanf("%f",&r);	
	float area;
	area =pi* r * 2;
	printf("Perimeter of circle is:%f",area);
	
}
