#include <stdio.h>

void executeInstruction(int N, char instruction, int* x, int* y) {
    int nx = *x;
    int ny = *y;

    switch (instruction) {
        case 'U': nx -= 1; break;
        case 'D': nx += 1; break;
        case 'L': ny -= 1; break;
        case 'R': ny += 1; break;

        default: return;
    }

    if (nx >= 1 && nx <= N && ny >= 1 && ny <= N) {
        *x = nx;
        *y = ny;
    }
}

int main() {
    int N;
    int x = 1;
    int y = 1;

    scanf("%d", &N);
    char instruction;
    while (scanf("%c", &instruction) != EOF) {
        executeInstruction(N, instruction, &x, &y);
    }
    printf("%d %d\n", x, y);
    
    return 0;
}