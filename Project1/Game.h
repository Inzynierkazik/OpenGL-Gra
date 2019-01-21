#pragma once

#include <iostream>
#include <cmath>
#include <GL/freeglut.h>
#include "Enemy.h"

#define ANIM_FPS 60

float angle = 0.0f;
int shot = 0;

// actual vector representing the camera's direction
float lx = 0.0f, lz = -1.0f, ly = 0.0f;
// XYZ position of the camera
float x = 8.0f, z = 15.0f, y = -1.0f;
// float x = 0.0f, z = 5.0f, y=1.0f;
float bx = 7.5f, by = -5.0f, bz = 0.0f;

float px = 7.5f, py = -6.0f, pz = 0.0f;

float deltaAngle = 0.0f;
float deltaAngle1 = 0.0f;
float deltaMove = 0;
int xOrigin = -1;

float red = 0.8f, green = 0.8f, blue = 0.8f;

GLfloat lightAmb[] = {0.1, 0.1, 0.1, 1.0};
GLfloat lightDif[] = {0.7, 0.7, 0.7, 1.0};
GLfloat lightPos[] = {0, 0, 800, 1.0};
GLfloat lightSpec[] = {1, 1, 1, 1};

Enemy* przec1 = new Enemy(0,0);
Enemy* przec2 = new Enemy(0,1);
Enemy* przec3 = new Enemy(0,2);
Enemy* przec4 = new Enemy(1,0);
Enemy* przec5 = new Enemy(1,1);
Enemy* przec6 = new Enemy(1,2);
Enemy* przec7 = new Enemy(2,0);
Enemy* przec8 = new Enemy(2,1);
Enemy* przec9 = new Enemy(2,2);
Enemy* przec10 = new Enemy(3,0);
Enemy* przec11 = new Enemy(3,1);
Enemy* przec12 = new Enemy(3,2);
Enemy* przec13 = new Enemy(4,0);
Enemy* przec14 = new Enemy(4,1);
Enemy* przec15 = new Enemy(4,2);
Enemy* przec16 = new Enemy(5,0);
Enemy* przec17 = new Enemy(5,1);
Enemy* przec18 = new Enemy(5,2);
Enemy* przec19 = new Enemy(6,0);
Enemy* przec20 = new Enemy(6,1);
Enemy* przec21 = new Enemy(6,2);
Enemy* przec22 = new Enemy(7,0);
Enemy* przec23 = new Enemy(7,1);
Enemy* przec24 = new Enemy(7,2);
Enemy* przec25 = new Enemy(8,0);
Enemy* przec26 = new Enemy(8,1);
Enemy* przec27 = new Enemy(8,2);
Enemy* przec28 = new Enemy(9,0);
Enemy* przec29 = new Enemy(9,1);
Enemy* przec30 = new Enemy(9,2);
Enemy* przec31 = new Enemy(10,0);
Enemy* przec32 = new Enemy(10,1);
Enemy* przec33 = new Enemy(10,2);
Enemy* przec34 = new Enemy(11,0);
Enemy* przec35 = new Enemy(11,1);
Enemy* przec36 = new Enemy(11,2);
