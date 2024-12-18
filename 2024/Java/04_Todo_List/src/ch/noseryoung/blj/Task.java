package ch.noseryoung.blj;

import java.util.UUID;


public class Task {
    private String titel;
    private String description;
    private int status;
    private int importance;
    private UUID uuid;

    public Task(String titel, String description, int status) {
        this.titel = titel;
        this.description = description;
        this.status = status;
        this.importance = 2;
        this.uuid = UUID.randomUUID();
    }

    public Task(String titel, String description, int status, int importance) {
        this.titel = titel;
        this.description = description;
        this.status = status;
        this.importance = importance;
        this.uuid = UUID.randomUUID();
    }

    public UUID getUuid() {
        return uuid;
    }

    public void setUuid(UUID uuid) {
        this.uuid = uuid;
    }

    public String getTitel() {
        return titel;
    }

    public void setTitel(String titel) {
        this.titel = titel;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public int isStatus() {
        return status;
    }

    public int getImportance() {
        return importance;
    }

    public void setStatus(int status) {
        this.status = status;
    }

    public void setImportance(int importance) {
        this.importance = importance;
    }

    public String getTaskBeschreib() {
        return "Titel: " + titel + "\n" + "description: " + description + "\n" + "importance: " + importance + "\n" + "Progress: " + status + "%" + "\n" + "UUID: " + uuid;
    }
}