// C Program for
// Replacing 0 to 1
#include <stdio.h>
#include <math.h>


int main()
{
    int N = 102301;

    int ans = 0;
    int i = 0;
    while (N != 0) {
        // Condition to change value
        if (N % 10 == 0)
            ans = ans + 1 * pow(10, i);
        else
            ans = ans + (N % 10) * pow(10, i);

        N = N / 10;
        i++;
        printf("ans: %d, N:%d \n", ans, N);
    }

    printf("%d", ans);

    return 0;
}
// gcc swith1.c -lm