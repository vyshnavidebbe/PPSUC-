#include <stdio.h>

int main(){
    double CP, SP;
    scanf("%lf %lf", &CP, &SP);

    double loss=CP-SP;
    double loss_percentage=(loss/CP)*100;

    printf("%.2f", loss_percentage);

    return 0;
}
