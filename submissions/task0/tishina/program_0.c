#include <stdio.h>

int main(void) {    
    int n, a;
    scanf("%d%d", &n, &a);

    int max = a;
    int cnt = 1;
    
    for (int i = 1; i < n; i++) {
        scanf("%d", &a);
        
        if (a > max) {
            max = a;
            cnt = 1;
        } else if (a == max) {
            cnt++;
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}

