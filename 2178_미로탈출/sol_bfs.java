import java.io.*;
import java.util.*;

class Main {
    public static int N, M;
    public static int [][] graph = new int [200][200];
    public static int dx[] = {-1, 1, 0, 0};
    public static int dy[] = {0, 0, -1, 1};

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
        scanner.close();

        System.out.println(bfs());
    }

    public static int bfs() {
        Queue<Node> queue = new LinkedList<>();
        queue.add(new Node(0, 0));

        while (!queue.isEmpty()) {
            Node node = queue.poll();
            int x = node.getX();
            int y = node.getY();

            for (int d = 0; d < 4; ++d) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                    if (graph[nx][ny] == 1) {
                        graph[nx][ny] = graph[x][y] + 1;
                        queue.add(new Node(nx, ny));
                    }
                }
            }
        }

        return graph[N - 1][M - 1];
    }

    static class Node {
        final private int x;
        final private int y;
        Node (int x, int y) {
            this.x = x;
            this.y = y;
        }
        public int getX() {
            return x;
        }
        public int getY() {
            return y;
        }
    }
}