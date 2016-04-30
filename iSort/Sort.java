import java.util.Random;
public class Sort{
	public static void main(String[] args){
		int n = 100000;
		double nums[] = new double[n];
		Random r = new Random();
		for(int i = 0; i<n;i++){
			nums[i] = r.nextDouble();
		}

		for(int i=0; i<n;i++){
			int min = i;
			for(int j=i; j<n;j++){
				if(nums[j] < nums[min]){
					min = j;
				}
			}
		double temp = nums[i];
		nums[i] = nums[min];
		nums[min] = temp;
		}

	}
}