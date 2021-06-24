#include <stdio.h>

void update(int *a,int *b) {
    int tempA, tempB;
    tempA = *a + *b;
    if(*a-*b >= 0){
        tempB = *a-*b;
    }else {
        tempB = (*a-*b) * -1;
    }
    *a = tempA;
    *b = tempB;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
