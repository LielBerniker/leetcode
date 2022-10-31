package Easy.Valid_Parentheses;

import java.util.Stack;

public class Valid_Parentheses {
    public static void main(String[] args) {
        String str = "()[]{(]}";
        System.out.println(isValid(str));
    }
    public static boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();

        for (int i = 0 ;i <s.length() ; i++) {
            char currC = s.charAt(i);
            switch(currC) {
                case '(': case '[': case '{':
                    stack.push(currC);
                    break;
                case ')':
                    if(stack.isEmpty() || stack.peek() != '(')
                    {
                        return false;
                    }
                    else{
                        stack.pop();
                    }
                    break;
                case '}':
                    if(stack.isEmpty() || stack.peek() != '{')
                    {
                        return false;
                    }
                    else{
                        stack.pop();
                    }
                    break;
                case ']':
                    if(stack.isEmpty() || stack.peek() != '[')
                    {
                        return false;
                    }
                    else{
                        stack.pop();
                    }
                    break;
                default:
                    // code block
            }
        }
        if(stack.isEmpty())
        {
            return true;
        }
        return false;
    }
}
