#include <stdio.h>
int main()
{

    int i;
    for(i=11; i<=65; i++)
    {
        printf("{ \"name\": \"%2d\" },\n", i);
    }
    return 0;
}
