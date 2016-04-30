#include <FPT.h>

int main(){
	clock_t begin,end;
	srand(time(NULL));
	int k;
	for(k=0;k<100;k++){
		begin = clock();
	int trials = 10000000;
	int i;
	int hit = 0;
	for(i = 0; i<trials;i++){
		double x = (2 * ((double)rand()/(double)RAND_MAX)) - 1;
		double y = (2 * ((double)rand()/(double)RAND_MAX)) - 1;
		// printf("x,y = %lf , %lf\n",x,y );
		if(sqrt((x*x) + (y*y)) < 1){
			// printf("sqrt = %lf\n", sqrt((x*x) + (y*y)));
			hit = hit + 1;
		}
	}
	end = clock();

	double dur = (double)(end-begin)/CLOCKS_PER_SEC;
	printf("%lf\n", dur);
	// printf("pi = %lf\n",(((double)hit)/(double)trials) *4);
}
}