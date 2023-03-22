#include <stdio.h>

void print_9_times_table() {
    int i;
    for (i = 0; i <= 10; i++) {
        printf("%d x 9 = %d\n", i, i * 9);
    }
}

int main() {
    print_9_times_table();
    return 0;
}

