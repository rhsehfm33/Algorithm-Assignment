import java.util.Scanner;

class Main {
    public static void main (String[] args) {

        // 1. 0 ~ 59초까지 '3' 숫자가 포함된 갯수를 S라고 했을 때, S = 15
        // 2. 0 ~ 59분까지 '3' 숫자가 포함된 갯수를 M이라고 했을 때, M = (S * 60) + ((60 - S) * 15)
        // 3. 여기서 mod 연산의 특징을 이용해 '3' 이 포함된 시의 갯수를 (N + 7) / 10 으로 표현할 수 있다.
        // 4. 그래서 변수 H를 다음과 같이 표현하면, H = (N + 7) / 10
        // 5. 답은, H * 3600 + ((N + 1) - H) * M 으로 표현될 수 있다.
        // 6. 고로 하기와 같은 코드를 적었다.

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        System.out.println((((N + 7) / 10) * 3600 + (N + 1 - ((N + 7) / 10)) * (15 * 60 + 45 * 15)));
    }
}