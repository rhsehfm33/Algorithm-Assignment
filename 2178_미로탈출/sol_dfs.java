import java.io.*;
import java.util.*;

class Main {
    public static final int INF = (int)1e9;

    public static int N, M;
    public static int ans = INF;
    public static int [][] graph = new int [100][100];
    public static int [][] dis = new int [100][100];
    public static int dx[] = {-1, 1, 0, 0};
    public static int dy[] = {0, 0, -1, 1};

    public static void initializedis() {
        for (int x = 0; x < N; ++x) {
            for (int y = 0; y < M; ++y) {
                dis[x][y] = INF;
            }
        }
    }

    public static void main (String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();
        M = scanner.nextInt();
        scanner.nextLine();

        for (int x = 0; x < N; ++x) {
            String str = scanner.nextLine();
            for (int y = 0; y < M; ++y) {
                graph[x][y] = str.charAt(y) - '0';
            }
        }
        initializedis();

        scanner.close();

        dfs(0, 0, 1);
        System.out.println(ans);
    }

    public static void dfs(int x, int y, int curDis) {
        if (x == N - 1 && y == M - 1 && curDis < ans) {
            ans = curDis;
            return;
        }

        graph[x][y] = 0;
        for (int d = 0; d < 4; ++d) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if (graph[nx][ny] == 1 && curDis + 1 < dis[nx][ny]) {
                    dis[nx][ny] = curDis + 1;
                    dfs(nx, ny, curDis + 1);
                }
            }
        }
        graph[x][y] = 1;
    }
}