// 15. Java Program to find maximum and minimum occurring character in a string
import java.util.HashMap;
public class ques15 {
    public static void findMaxMinOccurringChars(String str) {
        HashMap<Character, Integer> frequencyMap = new HashMap<>();
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            frequencyMap.put(ch, frequencyMap.getOrDefault(ch, 0) + 1);
        }
        char maxChar = str.charAt(0);
        char minChar = str.charAt(0);
        int maxCount = frequencyMap.get(maxChar);
        int minCount = frequencyMap.get(minChar);
        for (char key : frequencyMap.keySet()) {
            int count = frequencyMap.get(key);
            if (count > maxCount) {
                maxCount = count;
                maxChar = key;
            }
            if (count < minCount) {
                minCount = count;
                minChar = key;
            }
        }
        System.out.println("Character with maximum occurrences: " + maxChar + " (" + maxCount + " times)");
        System.out.println("Character with minimum occurrences: " + minChar + " (" + minCount + " time)");
    }
    public static void main(String[] args) {
        String inputString = "characterfrequency";
        findMaxMinOccurringChars(inputString);
    }
}
