#pragma once

#include <GL/freeglut.h>

class Enemy
{
public:
    Enemy(float x, float y);
    ~Enemy();
    bool live;
    float h;
    float w;
    float x;
    float y;
    float x1;
    float y1;
    float deltaX = 0.015f;
    float deltaY = -0.5f;
    void drawEnemy();
    void updateEnemy();
    void renderEnemy();


    bool isLive() const;

    void setLive(bool live);

    float getH() const;

    void setH(float h);

    float getW() const;

    void setW(float w);

    float getX1() const;

    void setX1(float x1);

    float getY1() const;

    void setY1(float y1);

    float getX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);
};
