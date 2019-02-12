/*
 * task4.c
 *
 *  Created on: 2019年2月9日
 *      Author: 111111
 */
#include <stdio.h>
int main(void){
	int i,j;
	printf("pattern A\n");
	for(i = 1;i<=10;++i){
		for (j = 1;j<=i;++j){
			printf("+");
		}
		printf("\n");
	}
	printf("pattern B\n");
		for(i = 10;i>=1;--i){
			for (j = 1;j<=i;++j){
				printf("+");
			}
			printf("\n");
		}
}

