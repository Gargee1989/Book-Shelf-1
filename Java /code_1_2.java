// 3. Count Punctuation Characters in a String

public class ques2 {
    public static void main(String[] args) {
        String str = "Hello, world! How's it going?";
        int count = 0;

        for (char ch : str.toCharArray()) {
            if (!Character.isLetterOrDigit(ch) && !Character.isWhitespace(ch)) {
                count++;
            }
        }
        System.out.println("Number of punctuation characters: " + count);
    }
}
