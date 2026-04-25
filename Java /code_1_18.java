// 18. Java Program to find the frequency of characters

import java.util.HashMap;
public class ques19 {
    public static void findCharacterFrequency(String str) {
        HashMap<Character, Integer> frequencyMap = new HashMap<>();
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            frequencyMap.put(ch, frequencyMap.getOrDefault(ch, 0) + 1);
        }
        System.out.println("Frequency of characters in the string:");
        for (char key : frequencyMap.keySet()) {
            System.out.println(key + ": " + frequencyMap.get(key));
        }
    }
    public static void main(String[] args) {
        String inputString = "hello";
        findCharacterFrequency(inputString);
    }
}
