//
// Created by mac on 2019-01-21.
//

#ifndef OPENGL_GRA_BULLET_H
#define OPENGL_GRA_BULLET_H

#include <GL/freeglut.h>

class Bullet {

public:
    Bullet();
    ~Bullet();
    bool live;
    float h;
    float w;
    float x;
    float y;
    float x1;
    float y1;
    void drawBullet();
    void updateBullet();
    void renderBullet();

    bool isLive() const;

    void setLive(bool live);

    float getH() const;

    void setH(float h);

    float getW() const;

    void setW(float w);

    float getX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);
};


#endif //OPENGL_GRA_BULLET_H
