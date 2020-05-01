/*
Given an array, of size , reverse it.
Example: If array,arr=[1,2,3,4,5] , after reversing it, the array should be,arr=[5,4,3,2,1] .
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    /* Write the logic to reverse the array. */
    int temp, j=num-1, l=0;
    while(j > l)
    {
        temp = *(arr + l);
        *(arr + l) = *(arr + j);
        *(arr + j) = temp;
        l++;
        j--;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
