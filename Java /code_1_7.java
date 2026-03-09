// 7. Java Program to find the longest repeating sequence in a string

import java.util.HashMap;
public class ques8 {
    public static String longestRepeatingSequence(String str) {
        int n = str.length();
        HashMap<String, Integer> map = new HashMap<>();
        String longestSeq = "";
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                String substring = str.substring(i, j);
                if (map.containsKey(substring)) {
                    map.put(substring, map.get(substring) + 1);
                } else {
                    map.put(substring, 1);
                }
                if (map.get(substring) > 1 && substring.length() > longestSeq.length()) {
                    longestSeq = substring;
                }
            }
        }
        
        return longestSeq;
    }
    public static void main(String[] args) {
        String inputString = "banana";
        String result = longestRepeatingSequence(inputString);
        if (!result.isEmpty()) {
            System.out.println("Longest repeating sequence: " + result);
        } else {
            System.out.println("No repeating sequence found.");
        }
    }
}
