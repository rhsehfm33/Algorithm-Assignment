import java.io.*;
import java.util.Scanner;

class Main {
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
        int N, K;
        N = sc.nextInt();
        K = sc.nextInt();
        
        int ans = 0;
        while (N > 0) {
            ans += (N % K) + (N >= K ? 1 : 0);
            N /= K;
        }
        System.out.println(ans - 1);
	}
}