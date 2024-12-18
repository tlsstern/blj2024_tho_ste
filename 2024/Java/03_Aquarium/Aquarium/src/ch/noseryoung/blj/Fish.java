package ch.noseryoung.blj;

import java.util.Random;

class Fish {
    private int x;
    private int y;
    private boolean isSaltwater;
    private String name;
    private Random random;

    public Fish(int x, int y, boolean isSaltwater) {
        this.x = x;
        this.y = y;
        this.isSaltwater = isSaltwater;
        this.name = "";
        this.random = new Random();
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }

    public boolean isSaltwater() {
        return isSaltwater;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void move(int dx, int dy) {
        this.x += dx;
        this.y += dy;
    }

    public void moveRandomly() {
        int dx = random.nextInt(3) - 1;
        int dy = random.nextInt(3) - 1;
        this.x += dx;
        this.y += dy;
    }
}