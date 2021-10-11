import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Main {
    public static boolean dfs(int N, int M, int[][] board, int x, int y) {
        if (board[x][y] == 1) {
            return false;
        }

        board[x][y] = 1;

        if (x + 1 < N) {
            dfs(N, M, board, x + 1, y);
        }
        if (x - 1 >= 0) {
            dfs(N, M, board, x - 1, y);
        }
        if (y + 1 < M) {
            dfs(N, M, board, x, y + 1);
        }
        if (y - 1 >= 0) {
            dfs(N, M, board, x, y - 1);
        }

        return true;
    }

    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int board[][] = new int[N][M];
        for (int x = 0; x < N; ++x) {
            st = new StringTokenizer(br.readLine());
            for (int y = 0; y < M; ++y) {
                board[x][y] = Integer.parseInt(st.nextToken());
            }
        }

        int ans = 0;
        for (int x = 0; x < N; ++x) {
            for (int y = 0; y < M; ++y) {
                if (dfs(N, M, board, x, y) == true) {
                    ans += 1;
                }
            }
        }

        System.out.println(ans);
    }
}