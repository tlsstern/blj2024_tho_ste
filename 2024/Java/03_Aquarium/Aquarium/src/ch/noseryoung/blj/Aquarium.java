package ch.noseryoung.blj;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Random;

class Aquarium {
    private int[][] aquarium;
    private boolean isSaltwater;
    private List<Fish> fishes;

    public Aquarium(int width, int height, boolean isSaltwater) {
        this.aquarium = new int[height][width];
        this.isSaltwater = isSaltwater;
        this.fishes = new ArrayList<>();
    }

    public int[][] getAquarium() {
        return aquarium;
    }

    public void setAquarium(int[][] aquarium) {
        this.aquarium = aquarium;
    }

    public boolean isSaltwater() {
        return isSaltwater;
    }

    public void setSaltwater(boolean saltwater) {
        isSaltwater = saltwater;
    }

    public List<Fish> getFishes() {
        return fishes;
    }

    public void setFishes(List<Fish> fishes) {
        this.fishes = fishes;
    }

    public void addFish(Fish fish) {
        if (fish.isSaltwater() == this.isSaltwater) {
            this.fishes.add(fish);
            updateFishPositions();
        } else {
            System.out.println("Invalid watertype for a fish");
        }
    }

    public void removeFish(int currentX, int currentY) {
        for (int i = 0; i < fishes.size(); i++) {
            Fish fish = fishes.get(i);
            if (fish.getX() == currentX && fish.getY() == currentY) {
                this.fishes.remove(i);
                updateFishPositions();
                return;
            }
        }
        System.out.println("No fish found");
    }

    public void updateFishPositions() {
        for (int i = 0; i < aquarium.length; i++) {
            Arrays.fill(aquarium[i], 0);
        }
        for (Fish fish : fishes) {
            int x = fish.getX();
            int y = fish.getY();
            if (x >= 0 && x < aquarium[0].length && y >= 0 && y < aquarium.length) {
                aquarium[y][x] = 1;
            }
        }
    }

    public void printAquarium() {
        for (int i = 0; i < aquarium.length + 2; i++) {
            System.out.print("\uD83E\uDDF1");
        }
        System.out.println();
        for (int i = 0; i < aquarium.length; i++) {
            System.out.print("\uD83E\uDDF1");
            for (int j = 0; j < aquarium[0].length; j++) {
                System.out.print(aquarium[i][j] == 1 ? "\uD83E\uDD88" : "\uD83C\uDF0A");
            }
            System.out.println("\uD83E\uDDF1");
        }
        for (int i = 0; i < aquarium.length + 2; i++) {
            System.out.print("\uD83E\uDDF1");
        }
        System.out.println();
    }

    public void moveFish(int currentX, int currentY, int newX, int newY) {
        for (int i = 0; i < fishes.size(); i++) {
            Fish fish = fishes.get(i);
            if (fish.getX() == currentX && fish.getY() == currentY) {
                if (newX >= 0 && newX < aquarium[0].length && newY >= 0 && newY < aquarium.length) {
                    fish.setX(newX);
                    fish.setY(newY);
                    updateFishPositions();
                    return;
                } else {
                    System.out.println("Invalid move. Out of Bounds");
                    return;
                }
            }
        }
        System.out.println("No fish found.");
    }

    public void nameFish(int currentX, int currentY, String name) {
        for (int i = 0; i < fishes.size(); i++) {
            Fish fish = fishes.get(i);
            if (fish.getX() == currentX && fish.getY() == currentY) {
                fish.setName(name);
                return;
            }
        }
        System.out.println("No fish found.");
    }

    public void killFish(int currentX, int currentY) {
        removeFish(currentX, currentY);
    }

    public void printWaterType() {
        if (isSaltwater) {
            System.out.println("The Fishtank is made out of salt water");
        } else {
            System.out.println("The Fishtank is made out of sweet water");
        }
    }

    public void moveFishRandomly() {
        for (Fish fish : fishes) {
            int newX = fish.getX() + new Random().nextInt(3) - 1;
            int newY = fish.getY() + new Random().nextInt(3) - 1;
            if (newX >= 0 && newX < aquarium[0].length && newY >= 0 && newY < aquarium.length) {
                fish.setX(newX);
                fish.setY(newY);
            }
        }
        updateFishPositions();
    }
}