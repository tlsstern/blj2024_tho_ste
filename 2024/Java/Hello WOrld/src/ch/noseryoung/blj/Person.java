package ch.noseryoung.blj;
public class Person {
    private String name;
    private String lieblingsfarbe;
    private int geburtsjahr;
    private String hobby;
    private String besterFreund;

    public Person(String name, String lieblingsfarbe, int geburtsjahr, String hobby, String besterFreund) {
        this.name = name;
        this.lieblingsfarbe = lieblingsfarbe;
        this.geburtsjahr = geburtsjahr;
        this.hobby = hobby;
        this.besterFreund = besterFreund;
    }


    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getLieblingsfarbe() {
        return lieblingsfarbe;
    }

    public void setLieblingsfarbe(String lieblingsfarbe) {
        this.lieblingsfarbe = lieblingsfarbe;
    }

    public int getGeburtsjahr() {
        return geburtsjahr;
    }

    public void setGeburtsjahr(int geburtsjahr) {
        this.geburtsjahr = geburtsjahr;
    }

    public String getHobby() {
        return hobby;
    }

    public void setHobby(String hobby) {
        this.hobby = hobby;
    }

    public String getBesterFreund() {
        return besterFreund;
    }

    public void setBesterFreund(String besterFreund) {
        this.besterFreund = besterFreund;
    }

    public String toString() {
        return "Name: " + name + "\n" +
                "Lieblingsfarbe: " + lieblingsfarbe + "\n" +
                "Geburtsjahr: " + geburtsjahr + "\n" +
                "Hobby: " + hobby + "\n" +
                "Bester Freund: " + besterFreund + "\n";
    }
}