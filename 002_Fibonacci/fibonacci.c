#include <stdio.h>

void main(){
	int x = 1;
	int y = 1;
	int sum = 0;

	while(x<4000000){
		int temp = y;
		y += x;
		x = temp;
		
		if(x%2==0){
			sum+=x;
		}
	}
	
	printf("The sum of the even numbers is: %d\n", sum);

}
