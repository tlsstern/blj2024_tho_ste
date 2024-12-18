package ch.noseryoung.blj;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    // Creation of an Array
    static ArrayList<Person> personenListe = new ArrayList<>();

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Always gets exuted unless 4 is chosen
        while (true) {
            System.out.println("\nWas möchten Sie tun?");
            System.out.println("**************************");
            System.out.println("1. Neue Person erstellen");
            System.out.println("2. Personen anzeigen");
            System.out.println("3. Person bearbeiten");
            System.out.println("4. Programm beenden");
            System.out.println("**************************");

            // Scanning the option
            int auswahl = scanner.nextInt();
            scanner.nextLine();

            // Diffrent options
            switch (auswahl) {
                case 1:
                    erstellePerson(scanner);
                    break;
                case 2:
                    zeigePersonen();
                    break;
                case 3:
                    bearbeitePerson(scanner);
                    break;
                case 4:
                    System.out.println("Programm wird beendet.");
                    scanner.close();
                    return;
                default:
                    System.out.println("Ungültige Auswahl.");
            }
        }
    }

    static void erstellePerson(Scanner scanner) {
        System.out.println("\nNeue Person erstellen:");
        System.out.print("Name: ");
        String name = scanner.nextLine();

        System.out.print("Lieblingsfarbe: ");
        String lieblingsfarbe = scanner.nextLine();

        System.out.print("Geburtsjahr: ");
        int geburtsjahr = scanner.nextInt();
        scanner.nextLine();

        System.out.print("Hobby: ");
        String hobby = scanner.nextLine();

        System.out.print("Name des besten Freunds/der besten Freundin: ");
        String besterFreund = scanner.nextLine();

        Person neuePerson = new Person(name, lieblingsfarbe, geburtsjahr, hobby, besterFreund);
        personenListe.add(neuePerson);

        System.out.println("Person erstellt: " + neuePerson);
    }

    static void zeigePersonen() {
        if (personenListe.isEmpty()) {
            System.out.println("Keine Personen vorhanden.");
            return;
        }

        System.out.println("\nPersonenliste:");
        for (Person person : personenListe) {
            System.out.println(person);
        }
    }

    static void bearbeitePerson(Scanner scanner) {
        if (personenListe.isEmpty()) {
            System.out.println("Keine Personen vorhanden.");
            return;
        }

        System.out.println("\nWelche Person möchten Sie bearbeiten? (Geben Sie den Namen ein):");
        String name = scanner.nextLine();

        Person zuBearbeitendePerson = null;
        for (Person person : personenListe) {
            if (person.getName().equals(name)) {
                zuBearbeitendePerson = person;
                break;
            }
        }

        if (zuBearbeitendePerson == null) {
            System.out.println("Person nicht gefunden.");
            return;
        }

        System.out.println("\nWelche Eigenschaft möchten Sie bearbeiten?");
        System.out.println("1. Name");
        System.out.println("2. Lieblingsfarbe");
        System.out.println("3. Geburtsjahr");
        System.out.println("4. Hobby");
        System.out.println("5. Bester Freund/Beste Freundin");

        int auswahl = scanner.nextInt();
        scanner.nextLine();

        switch (auswahl) {
            case 1:
                System.out.print("Neuer Name: ");
                zuBearbeitendePerson.setName(scanner.nextLine());
                break;
            case 2:
                System.out.print("Neue Lieblingsfarbe: ");
                zuBearbeitendePerson.setLieblingsfarbe(scanner.nextLine());
                break;
            case 3:
                System.out.print("Neues Geburtsjahr: ");
                zuBearbeitendePerson.setGeburtsjahr(scanner.nextInt());
                scanner.nextLine();
                break;      
            case 4:
                System.out.print("Neues Hobby: ");
                zuBearbeitendePerson.setHobby(scanner.nextLine());
                break;
            case 5:
                System.out.print("Neuer bester Freund/Neue beste Freundin: ");
                zuBearbeitendePerson.setBesterFreund(scanner.nextLine());
                break;
            default:
                System.out.println("Ungültige Auswahl.");
        }

        System.out.println("Person aktualisiert: " + zuBearbeitendePerson);
    }
}