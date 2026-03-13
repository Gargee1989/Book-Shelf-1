// 10. Java Program to replace lower-case characters with upper-case and vice-versa.

public class ques11 {
    public static String toggleCase(String str) {
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (Character.isLowerCase(ch)) {
                result.append(Character.toUpperCase(ch));
            } 
            else if (Character.isUpperCase(ch)) {
                result.append(Character.toLowerCase(ch));
            } 
            else {
                result.append(ch);
            }
        }
        return result.toString();
    }
    public static void main(String[] args) {
        String inputString = "Java ProGram 123!";
        String result = toggleCase(inputString);
        System.out.println("Original String: \"" + inputString + "\"");
        System.out.println("String with toggled case: \"" + result + "\"");
    }
}
