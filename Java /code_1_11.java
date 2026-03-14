// 11. Java Program to replace the spaces of a string with a specific character

public class ques12 {
    public static String replaceSpaces(String str, char replacement) {
        return str.replace(' ', replacement);
    }

    public static void main(String[] args) {
        String inputString = "This is a string with spaces.";
        char replacementChar = '_';
        String result = replaceSpaces(inputString, replacementChar);
        System.out.println("Original String: \"" + inputString + "\"");
        System.out.println("String with replaced spaces: \"" + result + "\"");
    }
}
