/*
 * task1.c
 *
 *  Created on: 2019年2月9日
 *      Author: 111111
 */

#include <stdio.h>
int main(void){
	double mealCost,tax,mealCostAddTax,trip,total;
	mealCost = 88.67;
	tax = mealCost*0.0675;
	mealCostAddTax = mealCost + tax;
	trip = mealCostAddTax * 0.2;
	total = mealCost +tax +trip;
	printf("mealCost is %lf\n",mealCost);
	printf("tax is %lf\n",tax);
	printf("mealCostAddTax is %lf\n",mealCostAddTax);
	printf("trip is %lf\n",trip);
	printf("total is %lf\n",total);
	return 0;
}

