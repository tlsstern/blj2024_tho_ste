package ch.noseryoung.blj;

public class Person {
    private String name;
    private String favoriteColor;
    private int age;

    public Person(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        return
                "name='" + name + '\'' +
                        ", favoriteColor='" + favoriteColor + '\'' +
                        ", age=" + age;
    }

    public String getFavoriteColor() {
        return favoriteColor;
    }

    public void setFavoriteColor(String favoriteColor) {
        this.favoriteColor = favoriteColor;
    }

    public String getName() {
        return name;
    }

    public void setAge(int age) {
        this.age = age;
    }
}