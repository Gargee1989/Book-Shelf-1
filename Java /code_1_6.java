// 6. Java Program to find all subsets of a string

import java.util.ArrayList;
import java.util.List;
public class ques7 {
    public static List<String> findSubsets(String str) {
        List<String> subsets = new ArrayList<>();
        int totalSubsets = (int) Math.pow(2, str.length());
        for (int i = 0; i < totalSubsets; i++) {
            StringBuilder subset = new StringBuilder();
            for (int j = 0; j < str.length(); j++) {
                if ((i & (1 << j)) != 0) {
                    subset.append(str.charAt(j));
                }
            }
            subsets.add(subset.toString());  
        }
        
        return subsets;
    }

    public static void main(String[] args) {
        String inputString = "abc";
        List<String> subsets = findSubsets(inputString);
        System.out.println("All subsets of the string: " + inputString);
        for (String subset : subsets) {
            System.out.println(subset);
        }
    }
}
