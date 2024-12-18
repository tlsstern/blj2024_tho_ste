package ch.noseryoung.blj;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("***************************************");
        System.out.println("Willkommen beim Kofferpacken-Spiel!");
        System.out.println("***************************************");

        ArrayList<String> koffer = new ArrayList<>();

        boolean spielLaeuft = true;
        while (spielLaeuft) {
            System.out.println("\nDu bist dran:");
            System.out.print("Was packst du in den Koffer? ");
            String gegenstand = scanner.nextLine();

            ArrayList<String> eingegebeneGegenstaende = new ArrayList<>();
            for (String s : gegenstand.split(", ")) {
                eingegebeneGegenstaende.add(s);
            }

            boolean fehler = false;
            for (int i = 0; i < koffer.size(); i++) {
                if (!koffer.get(i).equals(eingegebeneGegenstaende.get(i))) {
                    System.out.println("Falsche Reihenfolge! Du hast verloren!");
                    spielLaeuft = false;
                    fehler = true;
                    break;
                }
            }

            if (!fehler) {
                koffer.add(eingegebeneGegenstaende.get(koffer.size()));
            }
        }

        scanner.close();
    }
}