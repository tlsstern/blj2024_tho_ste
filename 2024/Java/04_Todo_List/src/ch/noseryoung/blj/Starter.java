package ch.noseryoung.blj;

import java.util.Scanner;

public class Starter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ToDoList noserTasks = new ToDoList();

        noserTasks.addTask(new Task("Task 1", "Very Interesting", 23, 1));
        noserTasks.addTask(new Task("Task 2", "Very Very Interesting", 64));
        noserTasks.addTask(new Task("Task 3", "Very Very Very Interesting", 69, 3));

        while (true) {
            System.out.println("**************************");
            System.out.println("Choose an action:");
            System.out.println("1. Show list");
            System.out.println("2. Check off Item");
            System.out.println("3. Add Item");
            System.out.println("4. Edit a task");
            System.out.println("5. Delete Task");
            System.out.println("6. Sort after importance");
            System.out.println("0. Exit");
            System.out.println("**************************");

            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    noserTasks.printTasks();
                    break;
                case 2:
                    System.out.println("What is the title of the task you want to check off?");
                    String titleToCheckOff = scanner.nextLine();
                    noserTasks.checkOffTask(titleToCheckOff);
                    break;
                case 3:
                    System.out.println("What is the title of the task?");
                    String title = scanner.nextLine();
                    System.out.println("What is the description of the task?");
                    String description = scanner.nextLine();
                    System.out.println("What is progress of the task?");
                    int status = scanner.nextInt();
                    System.out.println("What is the importance of the task? (1-3 | 2 = Default)");
                    int importance = scanner.nextInt();
                    noserTasks.addTask(new Task(title, description, status, importance));
                    break;
                case 4:
                    System.out.println("What is the title of the task you want to edit? (Enter to skip to the next thing)");
                    String titleToEdit = scanner.nextLine();
                    noserTasks.editTask(titleToEdit);
                    break;
                case 5:

                    break;
                case 6:

                    break;
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