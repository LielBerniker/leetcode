package Easy.Length_of_Last_Word;

public class Length_of_Last_Word {
    public static void main(String[] args) {
        String str = "Hello World";
        System.out.println(lengthOfLastWord(str));
    }
    public static int lengthOfLastWord(String s) {
        boolean inWord = false;
        int strSize = 0;
        for (int i = s.length()-1; i >= 0 ; i--) {
            char currC = s.charAt(i);
            if(currC == ' ')
            {
                if(inWord)
                {
                    return strSize;
                }
            }
            else {
                inWord = true;
                strSize++;
            }
        }
        return strSize;
    }
}
