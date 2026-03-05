// 3. Count Vowels and Consonants in a String

public class ques3 {
    public static void main(String[] args) {
        String str = "Hello World";
        str = str.toLowerCase();
        int vowels = 0, consonants = 0;

        for (char ch : str.toCharArray()) {
            if (ch >= 'a' && ch <= 'z') {
                if ("aeiou".indexOf(ch) != -1) vowels++;
                else consonants++;
            }
        }
        System.out.println("Vowels: " + vowels);
        System.out.println("Consonants: " + consonants);
    }
}
