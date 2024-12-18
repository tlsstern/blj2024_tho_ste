package ch.noseryoung.blj;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World");
        ArrayList<String> friends = new ArrayList<>();
        friends.add("Max");
        friends.add("Tim");
        friends.add("Bob");
        System.out.println(friends);
        if(friends.contains("Max")) {
            System.out.println("Max ist mein Freund. Index: " + friends.indexOf("Max"));
        }
        ArrayList<Person> contacts = new ArrayList<>();
        contacts.add(new Person("Max"));
        contacts.add(new Person("Tim"));
        contacts.add(new Person("Bob"));
        System.out.println(contacts);
    }
}
