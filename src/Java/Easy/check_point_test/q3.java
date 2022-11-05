package Easy.check_point_test;

import java.util.Arrays;
import java.util.HashSet;

public class q3 {
    public static void main(String[] args) {
        int x = 10;
        String str = "The quick brown fox jumps over the lazy dog";

    }

        public static int checkRow(HashSet<String> marked, int row_num)
    {
        int ans=0;
        String [] arr = {row_num+"B",row_num+"C",row_num+"D",row_num+"E",row_num+"F",row_num+"G",row_num+"H",row_num+"J"};
        boolean [] arr_2= new boolean[8];
        for (int i = 0; i <8 ; i++) {
            arr_2[i] = true;
        }
        for (int i=0;i<8;i++)
        {
            if(marked.contains(arr[i])) {arr_2[i]=false;}
        }
        boolean two=true;
        for(int i=0;i<8;i++)
        {
            if(!arr_2[i])
            {
                two=false;
                break;
            }
        }
        if (two)return 2;
        else
        {
            if((arr_2[0]&&arr_2[1]&&arr_2[2]&&arr_2[3]) || (arr_2[2]&&arr_2[3]&&arr_2[4]&&arr_2[5]) || (arr_2[4]&&arr_2[5]&&arr_2[6]&&arr_2[7]))
                return 1;
        }
        return 0;
    }

    public static int solution(int N, String S)
    {
        HashSet<String> marked = new HashSet<>();
        String [] splited = S.split(" ");
        marked.addAll(Arrays.asList(splited));
        // write your code in Java SE 8
        int max = 0;
        for(int i=1;i<=N;i++)
        {
            max+=checkRow(marked , i);
        }
        return max;
    }
}
