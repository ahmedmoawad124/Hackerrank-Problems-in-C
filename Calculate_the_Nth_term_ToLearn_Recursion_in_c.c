/*
There is a series,S , where the next term is the sum of pervious three terms. Given the first three terms of the series,a ,b ,c 
and respectively, you have to output the nth term of the series using recursion.
Recursive method for calculating nth term is given below.
      a                           n=1
S(n)= b                           n=2
      c                           n=3
      S(n-1) + S(n-2) + S(n-3)    Otherwise
     
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
// With Recursion
int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    if(n == 1) return a;
    else if(n == 2) return b;
    else if(n == 3) return c;
    else {
    return find_nth_term(n-1,a,b,c) + find_nth_term(n-2,a,b,c) + find_nth_term(n-3,a,b,c);
    }

}
// the same function Without Recursion:
int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int s[20] = {a, b, c};

  if(n>3)
  {
      int i=3;
      while(i < n)
      {
          s[i] = s[i-1] + s[i-2] + s[i-3];
          i++;
      }
      return s[n-1];
  }
  else return s[n-1];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
