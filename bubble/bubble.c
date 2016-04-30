#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#include <FPT.h>
int main(){
                  clock_t begin,end;

	int length = 10000;
	double arr[length];
	int i, j;

	srand(time(NULL));
                  int w;
      for(w=0;w<100;w++){
            begin = clock();
	for(i=0;i<length;i++){
		arr[i] = rand();
	}

	
      int swapped = 1;

      j = 0;

      int tmp;

      while (swapped) {

            swapped = 0;

            j++;

            for (i = 0; i < length - j; i++) {

                  if (arr[i] > arr[i + 1]) {

                        tmp = arr[i];

                        arr[i] = arr[i + 1];

                        arr[i + 1] = tmp;

                        swapped = 1;

                  }

            }

      }
                  end = clock();

      double dur = (double)(end-begin)/CLOCKS_PER_SEC;
      printf("%lf\n", dur);
}

}