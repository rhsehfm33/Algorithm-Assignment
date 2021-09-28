import java.io.*;
import java.util.Arrays;

class Main {
    
    public static void swap(int[] nums, int left, int right) {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
    }
    
	public static void main (String[] args) {
	    int[] nums = {6, 0, 8, 2, 3, 0, 4, 0, 1};
	    
	    for (int left = 0, right = 0; right < nums.length; ++right) {
            if (nums[right] != 0) {
                swap(nums, left++, right);
            }
	    }
	    
        for (int num : nums) {
            System.out.print(num + " ");
        }
	}
	
}