import java.util.Random;


public class Pi{

public static void main(String[] args){
	Long start;
	Long end;
	
	for(int k = 0; k<100;k++){
			start = System.currentTimeMillis();
	Random r = new Random();
	int trials = 10000000;
	int i;
	int hit = 0;
	for(i = 0; i<trials;i++){
		double x = (2 * r.nextDouble()) - 1;
		double y = (2 * r.nextDouble()) - 1;
		if(Math.sqrt((x*x) + (y*y)) < 1){
			hit = hit + 1;
		}
	}
	end = System.currentTimeMillis();

	System.out.println((end - start) * .001);
}
}

}