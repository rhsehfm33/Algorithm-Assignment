import java.util.Scanner;

class Main {

    static int[] dx = {-2, -2, -1, -1, 1, 1, 2, 2};
    static int[] dy = {-1, 1, -2, 2, -2, 2, -1, 1};

    public static void main (String[] args) {

        Scanner sc = new Scanner(System.in);
        String pos = sc.nextLine();
        int x = pos.charAt(0) - 'a' + 1;
        int y = pos.charAt(1) - '0';
        sc.close();

        int ans = 0;
        for (int d = 0; d < 8; ++d) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx >= 1 && nx <= 8 && ny >= 1 && ny <= 8) {
                ++ans;
            }
        }

        System.out.println(ans);

    }

}