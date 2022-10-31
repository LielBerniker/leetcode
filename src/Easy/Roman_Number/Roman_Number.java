package Easy.Roman_Number;
import java.util.HashMap;
public class Roman_Number {
    public static void main(String[] args) {
        System.out.println(romanToInt("III"));
        System.out.println(romanToInt("LVIII"));
        System.out.println(romanToInt("MCMXCIV"));

    }
    public static int romanToInt(String s) {
        HashMap<Character, Integer> allRoman = new HashMap<Character, Integer>();
        allRoman.put('I',1);
        allRoman.put('V',5);
        allRoman.put('X',10);
        allRoman.put('L',50);
        allRoman.put('C',100);
        allRoman.put('D',500);
        allRoman.put('M',1000);
        char prevC = s.charAt(0);
        int number = allRoman.get(prevC);
        for(int i = 1; i<s.length();i++)
        {
            char curC = s.charAt(i);
            if(allRoman.get(prevC)<allRoman.get(curC))
            {
                number = number - allRoman.get(prevC)*2 + allRoman.get(curC);
            }
            else {
                number += allRoman.get(curC);
            }
            prevC = curC;
        }
        return number;
    }


}
