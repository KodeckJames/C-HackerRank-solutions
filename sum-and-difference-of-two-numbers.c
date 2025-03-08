#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int integer1, integer2;
    float decimal1, decimal2;
    
    scanf("%d %d", &integer1, &integer2);
    printf("%d %d\n", integer1 + integer2, integer1 - integer2);

    scanf("%f %f", &decimal1, &decimal2);
    printf("%.1f %.1f", decimal1 + decimal2, decimal1 - decimal2);
    
    return 0;
}
