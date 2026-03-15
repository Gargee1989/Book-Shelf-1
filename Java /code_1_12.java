// 12. Java Program to determine whether a given string is palindrome

public class ques13 {
    public static boolean isPalindrome(String str) {
        str = str.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        int start = 0;
        int end = str.length() - 1;
        while (start < end) {
            if (str.charAt(start) != str.charAt(end)) {
                return false;  
            }
            start++;
            end--;
        }
        return true; 
    }
    public static void main(String[] args) {
        String inputString = "A man, a plan, a canal, Panama";
        boolean result = isPalindrome(inputString);
        if (result) {
            System.out.println("\"" + inputString + "\" is a palindrome.");
        } else {
            System.out.println("\"" + inputString + "\" is not a palindrome.");
        }
    }
}
