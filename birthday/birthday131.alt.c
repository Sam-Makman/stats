
#include <FPT.h>


int main()
{
  int N,n,s,i,k,r,c,d[365] ;
  double p ;

  cout << "how many students in class ? " ;
  cin >> N ;

  n = 1000000 ;
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
    while (k < N) {
      r = (int)floor(365*drand48()) ;
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
  cout << p ;
  cout << "\n" ;


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
  cout << "The theoretical value is " ;
  cout << p ;
  cout << "\n" ;

}


