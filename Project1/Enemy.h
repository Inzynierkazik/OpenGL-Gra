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
    float z;
    void drawEnemy();
    void updateEnemy();
    void renderEnemy();


	
};
