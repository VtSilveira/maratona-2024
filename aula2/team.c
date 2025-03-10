#include <stdio.h>

int main() {
    int i, a, c, v, b, cnt = 0;
    
    scanf("%d", &v);
    
    for (i = 0; i < v; i++) {
        scanf("%d%d%d", &a, &b, &c);
        if ((a + b + c) >= 2) {
            cnt++;
        }
    }
    
    printf("%d\n", cnt);
    
    return 0;
}
