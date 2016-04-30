import java.util.Random;
public class Chess{
	public static void main(String[] args){
			Long start;
	Long end;
	
	for(int k = 0; k<100;k++){
		start = System.currentTimeMillis();
	int n = 10000000;
	int i;
	Random r = new Random();
	double count = 0;
	for(i=0; i< n; i++){
		int knightx = (int)(r.nextDouble()*8);
		int knighty = (int)(r.nextDouble()*8);
		int x = (int)(r.nextDouble()*8);
		int y = (int)(r.nextDouble()*8);

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
	
		end = System.currentTimeMillis();

	System.out.println((end - start) * .001);
}
}
}