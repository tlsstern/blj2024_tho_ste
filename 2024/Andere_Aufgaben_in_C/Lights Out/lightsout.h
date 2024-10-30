#ifndef LIGHTSOUT_H
#define LIGHTSOUT_H
#define SIZE 5

int lightsoff(int light_out[SIZE][SIZE]);
void printField(int light_out[SIZE][SIZE]);
void changeLight(int x, int y, int light_out[SIZE][SIZE]);
int checkwin(int light_out[SIZE][SIZE]);

#endif //LIGHTSOUT_H
