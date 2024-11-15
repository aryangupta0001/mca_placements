/*
Accenture : 15-11-2024
Input a sorted Array, a target no., search for the no. in the array, if it is present, print its Index, else print the index, where it should be inserted in the array.
*/
#include<stdio.h>

int main()
{
    int A[100], i, j, target, N;

    scanf("%d", &N);

    for(i = 0; i<N; i++)
        scanf("%d", &A[i]);

    scanf("%d", &target);

    for(i = 0; i<N; i++)
        if(A[i] == target)
            break;
        
        else if(A[i] > target)
            break;

    printf("%d", i);
}
