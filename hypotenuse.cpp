#include <stdio.h>
#include <math.h>

int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    double hyp = sqrt((x*x)+(y*y));
    printf("%.2f", hyp);

    return 0;
}
