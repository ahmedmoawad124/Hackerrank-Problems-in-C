// Given a string,S , consisting of alphabets and digits, find the frequency of each digit in the given string.
/*
Sample Input:
a11472o5t6

Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.
Sample Output:
0 2 1 0 1 1 1 1 0 0         
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    char str[1000];
    scanf("%s", str);
         
    int freq[10]={0};
    int i=0;
    while(str[i] != '\0'){
        for(int j=0;j<10;j++)
        {
            if((str[i] - '0') == j) (freq[j])++;
             
        }

        i++;
    }

    for(int i=0;i<10;i++)
    {
        printf("%d ", freq[i]);
    }
    return 0;
}
