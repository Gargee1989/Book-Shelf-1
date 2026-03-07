// 5. Java Program to divide a string in 'N' equal parts.

import java.util.Scanner;
public class ques6 {
    @SuppressWarnings("resource")
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String inputString = scanner.nextLine();
        System.out.print("Enter the number of parts: ");
        int n = scanner.nextInt();
        int length = inputString.length();
        if (length % n != 0) {
            System.out.println("The string cannot be divided into " + n + " equal parts.");
        } else {
            int partLength = length / n;
            for (int i = 0; i < n; i++) {
                int start = i * partLength;
                int end = (i + 1) * partLength;
                System.out.println("Part " + (i + 1) + ": " + inputString.substring(start, end));
            }
        }
    }
}
