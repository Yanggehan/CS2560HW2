/*
 * task3.c
 *
 *  Created on: 2019年2月9日
 *      Author: 111111
 */
#include <stdio.h>
int main(void){
	double numberOfShares, initialPay, commission;
	double finishpay, finishCommission;
	double totalPay, payCommission, totalGet, SoldCommission, profit;
	numberOfShares = 1000;
	initialPay = 45.5;
	payCommission= numberOfShares*initialPay*0.02;
	finishpay= 56.9;
	SoldCommission = numberOfShares*finishpay*0.02;
	totalPay= numberOfShares*initialPay;
	totalGet= numberOfShares*finishpay;
	profit = totalGet - totalPay - SoldCommission - payCommission;
	printf("The amount of money Joe paid for the stock is %lf\n",totalPay);
	printf("The amount of commission Joe paid his broker when he bought the stock. is %lf\n",payCommission );
	printf("The amount that Joe sold the stock for. is %lf\n",totalGet);
	printf("The amount of commission Joe paid his broker when he sold the stock is %lf\n",SoldCommission);
	printf("The amount of profit is %lf\n",profit);
	return 0;
}

