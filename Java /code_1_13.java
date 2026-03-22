// 13. Java Program to determine whether one string is a rotation of another
public class ques13 {
    public static boolean isRotation(String str1, String str2) {
        if (str1.length() != str2.length()) {
            return false;
        }
        String concatenated = str1 + str1;
        return concatenated.contains(str2);
    }
    public static void main(String[] args) {
        String str1 = "waterbottle";
        String str2 = "erbottlewat";
        boolean result = isRotation(str1, str2);
        if (result) {
            System.out.println("\"" + str2 + "\" is a rotation of \"" + str1 + "\".");
        } else {
            System.out.println("\"" + str2 + "\" is not a rotation of \"" + str1 + "\".");
        }
    }
}
