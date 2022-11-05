package Easy.Two_Sum;

import java.util.Arrays;

public class Two_Sum {
    public static void main(String[] args) {
       int [] nums = {2,7,11,15};
       int target = 9;
       int[] ans = twoSum(nums,target);
        System.out.println(ans[0] + " " + ans[1]);
    }
    public static int[] twoSum(int[] nums, int target) {
       int [] targetNums= new int[2];
        for (int k = 0; k < nums.length ; k++) {
            for (int l = k+1; l < nums.length  ; l++) {
                if(nums[k] + nums[l] == target)
                {
                    targetNums[0] = k;
                    targetNums[1] = l;
                    break;
                }
            }
        }
        return targetNums;
    }
}
