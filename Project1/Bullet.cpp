//
// Created by mac on 2019-01-21.
//

#include "Bullet.h"

Bullet::Bullet() {
    live = false;
    h = 0.3f;
    w = 0.3f;
    //x1 = this->x;
    //y1 = this->y;
}

void Bullet::drawBullet(){
    glColor3f(1.0f, 0.0f, 0.0f);

    glTranslatef(0.0f, 1.2f, 0.0f);
    glutSolidCube(0.1);
    //-----------------------------------------
    glTranslatef(-0.1f, -0.1f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    //-----------------------------------------
    glTranslatef(-0.2f, -0.1f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
}


void Bullet::renderBullet() {
    if(live==true) {
        glPushMatrix();
        glTranslatef(this->x , this->y , 0.0f);
        drawBullet();
        glPopMatrix();
    }
}

void Bullet::updateBullet() {
        this->y += 0.1f;

}

bool Bullet::isLive() const {
    return live;
}

void Bullet::setLive(bool live) {
    Bullet::live = live;
}

float Bullet::getH() const {
    return h;
}

void Bullet::setH(float h) {
    Bullet::h = h;
}

float Bullet::getW() const {
    return w;
}

void Bullet::setW(float w) {
    Bullet::w = w;
}

float Bullet::getX() const {
    return x;
}

void Bullet::setX(float x) {
    Bullet::x = x;
}

float Bullet::getY() const {
    return y;
}

void Bullet::setY(float y) {
    Bullet::y = y;
}
