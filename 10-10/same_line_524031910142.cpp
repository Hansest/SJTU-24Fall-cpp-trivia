#include <cstdio>
#include <cmath>

double x1, y01, x2, y2, x3, y3;

int main() {
    printf("x1,y1:");
    scanf("%d%d", &x1, &y01);

    printf("x2,y2:");
    scanf("%d%d", &x2, &y2);
    
    printf("x3,y3:");
    scanf("%d%d", &x3, &y3);


    if (fabs((y2 - y01) * (x3 - x1) - (y3 - y01) * (x2 - x1)) < 1e-5) 
        puts("Yes");
    else 
        puts("No");

    return 0;
}