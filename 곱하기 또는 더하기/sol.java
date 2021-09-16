import java.io.*;
import java.util.Scanner;

class Main {
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    String S = sc.next();
	    
	    int ans = 0;
	    for (int i = 0; i < S.length(); ++i) {
	        int num = S.charAt(i) - '0';
	        if (ans <= 1 || num <= 1) {
	            ans += num;
	        }
	        else {
	            ans *= num;
	        }
	    }
        System.out.println(ans);
	}
}