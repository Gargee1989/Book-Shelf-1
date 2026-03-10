// 8. Java Program to find all the permutations of a string
import java.util.HashSet;
import java.util.Set;
public class ques9 {
    public static void generatePermutations(String str, String current, Set<String> permutations) {
        if (str.length() == 0) {
            permutations.add(current);
            return;
        }
        for (int i = 0; i < str.length(); i++) {
            String newStr = str.substring(0, i) + str.substring(i + 1);
            generatePermutations(newStr, current + str.charAt(i), permutations);
        }
    }
    public static void main(String[] args) {
        String inputString = "abc";
        Set<String> permutations = new HashSet<>();
        generatePermutations(inputString, "", permutations);
        System.out.println("All permutations of the string:");
        for (String perm : permutations) {
            System.out.println(perm);
        }
    }
}
