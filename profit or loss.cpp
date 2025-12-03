#include <stdio.h>

int main() {
    int cost, selling;
    scanf("%d", &cost);
    scanf("%d", &selling);

    if(selling > cost) {
        printf("Profit
");
    } 
    else if(selling < cost) {
        printf("Loss
");
    } 
    else {
        printf("No Profit and No Loss
");
    }

    return 0;
}

