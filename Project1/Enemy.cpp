#include "Enemy.h"

Enemy::Enemy(float x, float y){
    live = true;
    this->x = x;
    this->y = y;
    h = 0.8f;
    w = 1.2f;
    x1 = x;
    y1 = y;
}



void Enemy::drawEnemy() {

    glColor3f(0.8f, 0.8f, 0.8f);

    glTranslatef(0.0f, 1.5f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    //-----------------------------------------
    glTranslatef(-0.6f, -0.1f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    //-------------------------------------------
    glTranslatef(-1.0f, -0.1f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    //------------------------------------------------
    glTranslatef(-1.1f, -0.1f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.3f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.3f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    //-------------------------------------------------
    glTranslatef(-1.1f, -0.1f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    //-------------------------------------------------
    glTranslatef(-0.8f, -0.1f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.3f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    //-------------------------------------------------
    glTranslatef(-0.6f, -0.1f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.2f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.2f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    //-------------------------------------------------
    glTranslatef(-0.9f, -0.1f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.9f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glTranslatef(0.1f, 0.0f, 0.0f);
    glutSolidCube(0.1);

}

void Enemy::updateEnemy() {
    if(x > x1 + 1.2f || x < x1 - 1.2f ) {
        deltaX = -deltaX;
    }
    if (x > x1 + 1.2f || x < x1 - 1.2f){
        y += deltaY;
    }
    x += deltaX;
    //y -= 0.1f;
    //for(int i = 0; i < 10; i++)
//    {
//        x-= 0.0005f;
//    }
//    y -= 0.1f;
   // renderEnemy();


}

void Enemy::renderEnemy(){
    if(live==true) {
        glPushMatrix();
        glTranslatef(this->x * 1.5, this->y * 1.0, 0.0f);
        drawEnemy();
        glPopMatrix();
    }
}

bool Enemy::isLive() const {
    return live;
}

void Enemy::setLive(bool live) {
    Enemy::live = live;
}

float Enemy::getH() const {
    return h;
}

void Enemy::setH(float h) {
    Enemy::h = h;
}

float Enemy::getW() const {
    return w;
}

void Enemy::setW(float w) {
    Enemy::w = w;
}

float Enemy::getX1() const {
    return x1;
}

void Enemy::setX1(float x1) {
    Enemy::x1 = x1;
}

float Enemy::getY1() const {
    return y1;
}

void Enemy::setY1(float y1) {
    Enemy::y1 = y1;
}

float Enemy::getX() const {
    return x;
}

void Enemy::setX(float x) {
    Enemy::x = x;
}

float Enemy::getY() const {
    return y;
}

void Enemy::setY(float y) {
    Enemy::y = y;
}
