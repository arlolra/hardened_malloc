#include <stdlib.h>
#include <stdio.h>

__attribute__((optimize(0)))
int main(void) {
    char *p = malloc(0);
    if (!p) {
        return 1;
    }
    *p = 5;
    return 0;
}
