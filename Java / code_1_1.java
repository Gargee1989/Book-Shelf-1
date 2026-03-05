// 1. Count Total Number of Characters in a String

import java.util.Scanner;
public class ques1 {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = scanner.nextLine();
        System.out.println("Total characters: " + str.length());
    }
}
