package Easy.Palindrome_Number;

public class Palindrome_Number {
    public static void main(String[] args) {
    int x = 10;
        System.out.println(isPalindrome(x));
    }
    public static boolean isPalindrome(int x) {
        if(x<0)
            return false;
        int firstNum = x;
       int polNum = 0;
       boolean addto = true;
       while(firstNum>1)
       {
           polNum  = polNum*10 + firstNum%10;
           if(firstNum<10)
           {
               addto = false;
           }
           firstNum = firstNum/10;
       }
        if(addto) {
            polNum = polNum * 10 + firstNum;
        }
        return (x==polNum)?true: false;

    }
}
