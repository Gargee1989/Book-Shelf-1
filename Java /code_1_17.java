// 17. Java program to find the duplicate words in a string

import java.util.HashMap;
public class ques18 {
    public static void findDuplicateWords(String str) {
        String[] words = str.split(" ");
        HashMap<String, Integer> frequencyMap = new HashMap<>();
        for (String word : words) {
            frequencyMap.put(word, frequencyMap.getOrDefault(word, 0) + 1);
        }
        System.out.println("Duplicate words in the string:");
        for (String key : frequencyMap.keySet()) {
            if (frequencyMap.get(key) > 1) {
                System.out.println(key + ": " + frequencyMap.get(key));
            }
        }
    }
    public static void main(String[] args) {
        String inputString = "hello world hello java world hello";
        findDuplicateWords(inputString);
    }
}
