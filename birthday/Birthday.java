import java.util.Random;
public class Birthday{
	public static void main(String[] args){
		 int N,n,s,i,k,r,c ;
		 int[] d = new int[365];
  double p ;

  N = 20;

  n = 10000000 ;
  s = 0 ; // number of successes
  i = 0 ; 
  while (i < n) {

    // set all counters to 0
    k = 0 ;
    while (k < 365) {
      d[k] = 0 ;
      k = k + 1 ;
    }

    // generate birthdays for a class of N students
    k = 0 ;
    Random ran = new Random();
    while (k < N) {
      r = (int)Math.floor(365*ran.nextDouble()) ;
      d[r] = d[r] + 1 ;
      k = k + 1 ;
    }

    // check for collisions
    c = 0 ; // initial belief that there are no collisions
    k = 0 ;
    while (k < 365) {
      if (d[k] >= 2) { c = 1 ; }
      k = k + 1 ;
    }

    s = s + c ;

    i = i + 1 ;
  }

  p = (double)s/n ;
  System.out.println(p) ;


  // theoretical :
  // p = 1 - prob{all birthdays are distinct}
  //   = 1 - (365/365)*(364/365)*(363/365)...((365 - N + 1)/365)
  p = 1.0 ;
  i = 0 ;
  while (i < N) {
    p = p*(365-i)/365 ;
    i = i + 1 ;
  }
  p = 1 - p ;
  System.out.println( "The theoretical value is " );
  System.out.print(p) ;
	}
}