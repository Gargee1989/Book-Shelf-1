// 9. Java Program to remove all the white spaces from a string
public class ques10 {
    public static String removeWhitespace(String str) {
        return str.replaceAll("\\s+", "");
    }
    public static void main(String[] args) {
        String inputString = "   This is  a  string with   spaces.  ";
        String result = removeWhitespace(inputString);
        System.out.println("Original String: " + inputString);
        System.out.println("String without whitespace: " + result);
    }
}
