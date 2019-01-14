#include <stdio.h>
int main()
{

    int i;
    for(i=11; i<=65; i++)
    {
        printf("\t{\n");
        printf("\t\t\"name\": \"%2d\"\n", i);
        printf("\t},\n");
    }
    return 0;
}
