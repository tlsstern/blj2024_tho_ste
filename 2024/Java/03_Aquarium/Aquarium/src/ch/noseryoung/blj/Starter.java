package ch.noseryoung.blj;

import java.util.Random;
import java.util.Scanner;

public class Starter {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Aquarium aquarium = new Aquarium(5, 5, true);

        Random amount = new Random();
        int fish_count = amount.nextInt(10) + 1;
        for (int i = 0; i < fish_count; i++) {
            Random num1 = new Random();
            int x = num1.nextInt(4) + 1;
            Random num2 = new Random();
            int y = num2.nextInt(4) + 1;
            aquarium.addFish(new Fish(x, y, true));
        }
        aquarium.printAquarium();

        while (true) {
            System.out.println("**************************");
            System.out.println("Choose an action:");
            System.out.println("1. Move fish");
            System.out.println("2. Name fish");
            System.out.println("3. Kill fish");
            System.out.println("4. Water type");
            System.out.println("5. Move fish randomly");
            System.out.println("6. Add fish");
            System.out.println("0. Exit");
            System.out.println("**************************");

            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    System.out.println("Enter the X coordinate");
                    int currentX = scanner.nextInt() - 1;
                    scanner.nextLine();

                    System.out.println("Enter the Y coordinate");
                    int currentY = scanner.nextInt() - 1;
                    scanner.nextLine();

                    System.out.println("Enter the new X coordinate");
                    int newX = scanner.nextInt() - 1;
                    scanner.nextLine();

                    System.out.println("Enter the new Y coordinate");
                    int newY = scanner.nextInt() - 1;
                    scanner.nextLine();

                    aquarium.moveFish(currentX, currentY, newX, newY);
                    aquarium.printAquarium();
                    break;
                case 2:
                    System.out.println("Enter the X coordinate");
                    currentX = scanner.nextInt() - 1;
                    scanner.nextLine();

                    System.out.println("Enter the Y coordinate");
                    currentY = scanner.nextInt() - 1;
                    scanner.nextLine();

                    System.out.println("Gib den Namen ein:");
                    String name = scanner.nextLine();

                    aquarium.nameFish(currentX, currentY, name);
                    break;
                case 3:
                    System.out.println("Enter the X coordinate");
                    currentX = scanner.nextInt() - 1;
                    scanner.nextLine();

                    System.out.println("Enter the Y coordinate");
                    currentY = scanner.nextInt() - 1;
                    scanner.nextLine();

                    aquarium.killFish(currentX, currentY);
                    aquarium.printAquarium();
                    break;
                case 4:
                    aquarium.printWaterType();
                    break;
                case 5:
                    aquarium.moveFishRandomly();
                    aquarium.printAquarium();
                    break;
                case 6:
                    System.out.println("Enter the X coordinate");
                    currentX = scanner.nextInt() - 1;
                    scanner.nextLine();

                    System.out.println("Enter the Y coordinate");
                    currentY = scanner.nextInt() - 1;
                    scanner.nextLine();
                    aquarium.addFish(new Fish(currentX, currentY, true));
                case 0:
                    System.out.println("Thank you for playing.");
                    scanner.close();
                    return;
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}