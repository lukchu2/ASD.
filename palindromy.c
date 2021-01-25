#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   int s=0,l;
    int a[100];
    for(;;)
    {
        scanf("%d",&a[s]);
        if(a[s]==" ")
            break;
        printf("%d",a[s]);
        s++;

    }
    return 0;
}
