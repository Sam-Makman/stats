# Sam Makman

birthday <- function(n){
	d <- NULL;
	s <- 0;
	reps <- 100000;
	for(i in 1:reps){

		for(k in 1:365){
			d[k] <- 0;
		}

		for(k in 1: n){
			r <- sample(1:365, 1);
			d[r] = d[r] + 1;
		}

		c <- 0;
		for(k in 1:365){
			if(d[k] >= 2){
				c<- 1;
			}
		}

		s <- s+c;
	}	

	p <- s/reps;
	print(p);

	p <- 1;
	for(i in 1:365){
		p <- p *(365-1)/(365);
	}
	p <- 1 - p;
	print("The theoretical value is ");
	print(p);

}
