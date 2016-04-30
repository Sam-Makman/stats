import java.util.Random;
public class Bubble{
	public static void main(String[] args){
            Long start;Long end;
      
      for(int k = 0; k<100;k++){
            start = System.currentTimeMillis();
		int n = 10000;
		double arr[] = new double[n];
		Random r = new Random();
		for(int i = 0; i<n;i++){
			arr[i] = r.nextDouble();
		}

		boolean swapped = true;
      int j = 0;
      double tmp;
      while (swapped) {
            swapped = false;
            j++;
            for (int i = 0; i < arr.length - j; i++) {                                       
                  if (arr[i] > arr[i + 1]) {                          
                        tmp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = tmp;
                        swapped = true;
                  }
            }                
      }
	 
            end = System.currentTimeMillis();

      System.out.println((end - start) * .001);
}
}
}