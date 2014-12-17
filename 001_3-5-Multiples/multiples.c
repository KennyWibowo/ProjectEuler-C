#include <stdio.h>

void main(){

	int sum = 0;
	int upperLimit = 1000;
	int multiple1 = 3;
	int multiple2 = 5;	
	int multiplemultiple = multiple1*multiple2;
	int lim1 = 1000/multiple1;
	int lim2 = 1000/multiple2;
	int lim3 = 1000/multiplemultiple;

	upperLimit % multiple1 != 0 ? lim1++ : 0;
	
	upperLimit % multiple2 != 0 ? lim2++ : 0;

	upperLimit % multiplemultiple !=0 ? lim3++ : 0;

	for(int i=1; i<lim1; i++){
		sum += 3*i;
	}

	for(int i=1; i<lim2; i++){
		sum += 5*i;
	}

	for(int i=1; i<lim3; i++){
		sum -= 15*i;
	}

	printf("The sum of all the multiples of 3 and 5 is %d\n", sum);

}
