#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double l, s1, s2;
    int q;
    int i;
    scanf("%lf %lf %lf", &l, &s1, &s2);
    scanf("%d", &q);
    double* results = (double*) malloc(sizeof(double) * q);
    for (i = 0; i < q; i++) {
        double qi;
        scanf("%lf", &qi);
        results[i] = sqrt(2) * (l - sqrt(qi)) / fabs(s2 - s1);
    }
    for (i = 0; i < q; i++) {
        printf("%.20f\n", results[i]);
    }
    free(results);
    return 0;
}