package ch.noseryoung.blj;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ToDoList {
    private List<Task> tasks;
    Scanner scanner = new Scanner(System.in);

    public ToDoList() {
        this.tasks = new ArrayList<>();
    }

    public void addTask(Task task) {
        this.tasks.add(task);
    }

    public void printTasks() {
        System.out.println("--------------------");
        for (Task task : tasks) {
            System.out.println(task.getTaskBeschreib());
            System.out.println("--------------------");
        }
    }

    public void checkOffTask(String title) {
        for (Task task : tasks) {
            if (task.getTitel().equalsIgnoreCase(title)) {
                task.setStatus(100);
                System.out.println(title + " checked off");
                return;
            }
        }
        System.out.println("not found");
    }

    public void editTask(String title) {
        for (Task task : tasks) {
            if (task.getTitel().equalsIgnoreCase(title)) {
                System.out.println("What is the new title?");
                String newTitle = scanner.nextLine();
                if (!newTitle.isEmpty()) {
                    task.setTitel(newTitle);
                }

                System.out.println("What is the new description?");
                String newDescription = scanner.nextLine();
                if (!newDescription.isEmpty()) {
                    task.setDescription(newDescription);
                }

                System.out.println("What is the new progress? (Press Enter to skip)");
                String newStatusStr = scanner.nextLine();
                if (!newStatusStr.isEmpty()) {
                    int newStatus = Integer.parseInt(newStatusStr);
                    task.setStatus(newStatus);
                }

                System.out.println("What is the new importance? (1-3 | Press Enter to skip)");
                String newImportanceStr = scanner.nextLine();
                if (!newImportanceStr.isEmpty()) {
                    int newImportance = Integer.parseInt(newImportanceStr);
                    task.setImportance(newImportance);
                }

                System.out.println(title + " edited!");
                return;
            }
        }
        System.out.println("Task not found.");
    }
}