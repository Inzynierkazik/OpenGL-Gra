#include "Enemy.h"

Enemy::Enemy(float x, float y){
    live = true;
    h = 8;
    w = 12;
    this-> x = x;
    this-> y = y;
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
    for(int i = 0; i < 10; i++)
    {
        x += 0.0005f;
    }
    //y -= 0.1f;
    //for(int i = 0; i < 10; i++)
//    {
//        x-= 0.0005f;
//    }
//    y -= 0.1f;
   // renderEnemy();


}

void Enemy::renderEnemy(){
    glPushMatrix();
    glTranslatef(this->x *1.5, this->y *1.0, 0.0f);
    drawEnemy();
    glPopMatrix();
}
