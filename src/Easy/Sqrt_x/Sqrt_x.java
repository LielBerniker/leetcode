package Easy.Sqrt_x;

public class Sqrt_x {
    public static void main(String[] args) {
       int num = 2147395599;
        System.out.println(mySqrt(num));

    }
    public static int mySqrt(int x) {
        int low = 0, high = x, mid = high/2;
    if(x == 0)
        return 0;
        while(low<high)
        {
            if(mid==0)
            {
                return 1;
            }
            if(x/mid == mid)
            {
                return mid;
            }
            if(low+1==high)
            {
                break;
            }
            else if(x/mid>mid)
            {
                low = mid;
            }else {
                high = mid;
            }
            mid = (high-low)/2 + low;
        }
        if(x/high<high)
            return low;
        else
            return high;
    }
}
