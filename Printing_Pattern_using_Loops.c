// In this problem, you need to print the pattern of the following form containing the numbers from 1 to n.
/*
                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4  
*/
// Tips : the number to print is: n minus {min distance to the four sides}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int len = n + (n-1);
    for(int i=0; i < len; i++)
    {
        for(int j=0; j < len; j++)
        {
            int min = i < j ? i : j;
            min = min < len - 1 - i ? min : len - 1 - i;
            min = min < len - 1 - j ? min : len - 1 - j;
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}
