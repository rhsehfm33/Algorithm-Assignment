import java.util.HashMap;
import java.util.Scanner;

class Main {
    public static void main (String[] args) {

        HashMap<Character, Integer> dx = new HashMap<Character, Integer>();
        dx.put('U', -1);
        dx.put('D', 1);

        HashMap<Character, Integer> dy = new HashMap<Character, Integer>();
        dy.put('L', -1);
        dy.put('R', 1);
        
        Scanner scanner = new Scanner(System.in);
        int N = Integer.parseInt(scanner.nextLine());
        String directions = scanner.nextLine();
        scanner.close();

        int x = 1;
        int y = 1;
        for (Character ch : directions.toCharArray()) {
            int nx = x + dx.getOrDefault(ch, 0);
            int ny = y + dy.getOrDefault(ch, 0);
            if (nx >= 1 && nx <= N && ny >= 1 && ny <= N) {
                x = nx;
                y = ny;
            }
        }

        System.out.println(x + " " + y);

    }
}