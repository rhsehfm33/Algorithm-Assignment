#include <stdio.h>

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

int main() {
    int x = getchar() - 'a' + 1;
    int y = getchar() - '0';

    int ans = 0;
    for (int d = 0; d < 8; ++d) {
        if (x + dx[d] >= 1 && x + dx[d] <= 8 && 
            y + dy[d] >= 1 && y + dy[d] <= 8) {
            ans += 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}