package Easy.Search_Insert_Position;

public class Search_Insert_Position {
    public static void main(String[] args) {
        int [] arr = {1,3,5,6};
        int target = 7;
        System.out.println(searchInsert(arr,target));
    }
    public static int searchInsert(int[] nums, int target) {
          int high = nums.length-1,low = 0,mid = high/2;
          while(low<high)
          {
              if(nums[mid] == target)
              {
                  return mid;
              }

              if(low+1==high)
              {
                  break;
              }
              else if(nums[mid] > target)
              {
                  high = mid;
              }else {

                  low = mid;
              }
              mid = (high-low)/2 + low;

          }
          if(nums[high]<target)
          {
              return high+1;
          }
          else{
              if(nums[low]>target)
              {
                  return low;
              }
              else {
                  return high;
              }
          }
    }
}
