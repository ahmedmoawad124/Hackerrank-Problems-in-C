#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char str[1000];
    char sen[10000];
    // Reading char
    scanf("%c", &ch);
    // Reading string
    scanf("%s", str);
    scanf("\n");
    // Reading sentence
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s", sen);

    return 0;
}
