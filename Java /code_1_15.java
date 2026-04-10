// 15. Java Program to find Reverse of the string

public class ques16 {
    public static String reverseString(String str) {
        StringBuilder reversed = new StringBuilder(str);
        return reversed.reverse().toString();
    }

    public static void main(String[] args) {
        String inputString = "Hello, World!";
        String reversedString = reverseString(inputString);
        System.out.println("Original String: \"" + inputString + "\"");
        System.out.println("Reversed String: \"" + reversedString + "\"");
    }
}
