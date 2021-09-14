import java.io.*;
import java.util.Scanner;

class Main {
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
        int N, K;
        N = sc.nextInt();
        K = sc.nextInt();
        int[] coins = new int[N];
        for (int i = 0; i < N; ++i) {
            coins[i] = sc.nextInt();
        }
        
        int ans = 0;
        for (int i = N - 1; i >= 0; --i) {
            ans += K / coins[i];
            K %= coins[i];
        }
        
		System.out.println(ans);
	}
}