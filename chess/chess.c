#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <FPT.h>

int main(){
		clock_t begin,end;
	int n = 10000000;
	int i;
	
	srand(time(NULL));
		int k;
	for(k=0;k<100;k++){
		begin = clock();
	double count = 0.0;
	for(i=0; i< n; i++){
		int knightx = (int)((rand()/(double)RAND_MAX)*8);
		int knighty = (int)((rand()/(double)RAND_MAX)*8);
		int x = (int)((rand()/(double)RAND_MAX)*8);
		int y = (int)((rand()/(double)RAND_MAX)*8);

		if(knightx + 2 == x && knighty +1 ==y){
			count++;
		}else if(knightx + 2 == x && knighty - 1 ==y){
			count++;
		}else if(knightx - 2 == x && knighty +1 ==y){
			count++;
		}else if(knightx - 2 == x && knighty -1 ==y){
			count++;
		}else if(knightx + 1 == x && knighty +2 ==y){
			count++;
		}else if(knightx - 1 == x && knighty +2 ==y){
			count++;
		}else if(knightx + 1 == x && knighty -2 ==y){
			count++;
		}else if(knightx -1 == x && knighty -2 ==y){
			count++;
		}

	}
		end = clock();

	double dur = (double)(end-begin)/CLOCKS_PER_SEC;
	printf("%lf\n", dur);
	// printf("pi = %lf\n",(((double)hit)/(double)trials) *4);
}
}