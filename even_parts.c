/* Accenture : 15-11-2024

Check whether a no. can be split into two even no. or not.
If yes, print "YES" else print "NO"

For Example :

1. N = 8
    2 + 6
    Print "YES"

2. N = 9
    Print "NO"

*/


#include<stdio.h>

int main()
{   int N, i, div = 0;

    scanf("%d", &N);

    if(N < 3 || N%2)
        printf("NO");
    
    else
        printf("YES");
}