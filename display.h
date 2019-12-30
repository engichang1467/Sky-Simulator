#ifndef DISPLAY_H
#define DISPLAY_H

void displayInit(void);
void displayEye(void);
void displayReshape(int width,int height);
void displayProject(double fov,double asp,double dim);
void display(void);
void redisplayAll(void);
void drawScene();
void drawSkybox(double D);

#endif // DISPLAY_H