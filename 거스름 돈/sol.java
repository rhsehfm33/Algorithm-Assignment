import java.io.*;
import java.util.Scanner;

class Main {
	public static void main (String[] args) {
	    int N = 1260;
	    int[] coins = {500, 100, 50, 10};
	    int ans = 0;
	    for (int i = 0; i < coins.length; ++i) {
	        ans += N / coins[i];
	        N %= coins[i];
	    }
	    
	    System.out.println("count = " + ans);
	}
}