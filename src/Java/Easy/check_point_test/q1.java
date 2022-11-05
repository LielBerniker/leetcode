package Easy.check_point_test;

public class q1 {
    public static void main(String[] args) {
        int x = 10;
        String str = "The quick brown fox jumps over the lazy        ";
        System.out.println(str.substring(0,3));
        System.out.println(solution(str,59));
    }

    public static String solution(String message, int K) {
      if(K>=message.length())
          return message.trim();
      String cutMessage = message.substring(0,K);
      cutMessage = cutMessage.trim();
      boolean space = false;

      if(message.charAt(cutMessage.length()) == ' ')
          return cutMessage;

        int cutIndex= cutMessage.length()-1;
        for (int i = cutMessage.length()-1; i >= 0; i--) {
            if(cutMessage.charAt(i) == ' ')
            {
                break;
            }
            cutIndex--;
        }
       cutMessage =  cutMessage.substring(0,cutIndex);
        return cutMessage;
    }

}
