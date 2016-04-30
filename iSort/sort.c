#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
	int length = 100000;
	double numbers[length];
	int i, j;

	srand(time(NULL));
	for(i=0;i<length;i++){
		numbers[i] = rand();
	}

	
	for(i=0; i<length; i++){
		int min = i;
		for(j=i;j<length;j++){
			if(numbers[j] < numbers[min]){
				min = j;
			}
		}
		double temp = numbers[i];
		numbers[i] = numbers[min];
		numbers[min] = temp;
	}
}