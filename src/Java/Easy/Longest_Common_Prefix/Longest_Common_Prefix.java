package Easy.Longest_Common_Prefix;

import java.util.HashMap;

public class Longest_Common_Prefix {
    public static void main(String[] args) {
       String []strArr = {"flower","flow","flight"};
        System.out.println( longestCommonPrefix(strArr));
    }
    public static String longestCommonPrefix(String[] strs) {
        if(strs.length == 1)
        {
            return strs[0];
        }
        HashMap<String, Integer> allpre = new HashMap<String, Integer>();
        String biggestStr = "";
        int strLength = 0;
        for (int i = 0; i < strs.length; i++) {
            String currPre = "";
            for (int j = 0; j < strs[i].length(); j++) {
                currPre += strs[i].charAt(j);
                if (allpre.containsKey(currPre)) {
                    int addedPre = allpre.get(currPre) + 1;
                    allpre.put(currPre, addedPre);
                } else {
                    allpre.put(currPre, 0);
                }
            }
        }
        for (String curPre:allpre.keySet()) {
            int curnum = allpre.get(curPre);
            if(curnum == strs.length-1)
            {
                int currLength = curPre.length();
                if(currLength>strLength) {
                    strLength = currLength;
                    biggestStr = curPre;
                }
            }
        }
        return biggestStr;
    }
}
