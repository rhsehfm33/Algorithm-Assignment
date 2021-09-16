import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

class Main {
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int N = sc.nextInt();
	    int[] P = new int[N];
        for (int i = 0; i < N; ++i) {
            P[i] = sc.nextInt();
        }
        
        int ans = 0;
        Arrays.sort(P);
        for (int i = 0; i < N; ++i) {
            ans += P[i] * (N - i);
        }
        System.out.println(ans);
	}
}