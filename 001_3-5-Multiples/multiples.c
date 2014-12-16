#include <stdio.h>

int bigNumber = 0;
int multiple1 = 3;
int multiple2 = 5;
int upperLimit = 1000;

void main(){
	
	int multiplemultiple = multiple1*multiple2;
	int lim1 = 1000/multiple1;
	int lim2 = 1000/multiple2;
	int lim3 = 1000/multiplemultiple;

	if(upperLimit % multiple1 !=0){
		lim1++;
	}
	if(upperLimit % multiple2 !=0){
		lim2++;
	}
	if(upperLimit % multiplemultiple !=0){
		lim3++;
	}

	for(int i=1; i<lim1; i++){
		bigNumber += 3*i;
	}

	for(int i=1; i<lim2; i++){
		bigNumber += 5*i;
	}

	for(int i=1; i<lim3; i++){
		bigNumber -= 15*i;
	}

	printf("The sum of all the multiples of 3 and 5 is %d\n", bigNumber);

}
