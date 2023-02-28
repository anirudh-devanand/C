#include <stdio.h>

void printRow(char ch, int num) {
    for (int i = 0; i < num; i++) {
        printf("%c", ch);
    }
    printf("\n");
}

int main() {
    int counters[1000] = {0};
    int num = 0;

    do {
        printf("Enter a positive integer : ");
        scanf("%d", &num);
        if (num >= 1 && num <= 100) {
            counters[(num - 1) / 10]++;
        }
    } while (num != -1);

    for (int i = 0; i < 10; i++) {
        printf("%3d - %3d: ", i * 10 + 1, (i + 1) * 10);
        printRow('*', counters[i]);
    }

    return 0;
}