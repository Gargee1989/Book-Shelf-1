// 16. Java program to find the duplicate characters in a string

import java.util.HashMap;
public class ques17 {
    public static void findDuplicateCharacters(String str) {
        HashMap<Character, Integer> frequencyMap = new HashMap<>();
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            frequencyMap.put(ch, frequencyMap.getOrDefault(ch, 0) + 1);
        }
        System.out.println("Duplicate characters in the string:");
        for (char key : frequencyMap.keySet()) {
            if (frequencyMap.get(key) > 1) {
                System.out.println(key + ": " + frequencyMap.get(key));
            }
        }
    }
    public static void main(String[] args) {
        String inputString = "programming";
        findDuplicateCharacters(inputString);
    }
}
