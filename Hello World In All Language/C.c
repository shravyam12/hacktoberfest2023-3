#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of times the term should be printed\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    { 
    printf("Hello World <3");
    }
    return EXIT_SUCCESS;
}
