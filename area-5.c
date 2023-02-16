#include<stdio.h>

main(){
	float Principal;
	float RateofInterest; 
	float Timeperiod;
	
	printf("Enter Principal of Simple interest:");
	scanf("%f",&Principal);
	printf("Enter RateofInterest of Simple interest:");
	scanf("%f",&RateofInterest);
	printf("Enter Timeperiod of Simple interest:");
	scanf("%f",&Timeperiod);
	float area;
	area =Principal*RateofInterest*Timeperiod;
	printf("Simple interest is:%f",area);
	
}
