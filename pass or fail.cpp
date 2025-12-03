#include <stdio.h>

int main() {
    int eng, maths, phy, chem, cs;
    scanf("%d %d %d %d %d", &eng, &maths, &phy, &chem, &cs);

    // Check if marks in all subjects are greater than 34
    if(eng > 34 && maths > 34 && phy > 34 && chem > 34 && cs > 34) {
        printf("PASSED");
    } else {
        printf("FAILED");
    }

    return 0;
}


