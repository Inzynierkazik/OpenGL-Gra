#pragma once

#include <iostream>
#include <GL/freeglut.h>

#define RED 1
#define GREEN 2
#define BLUE 3
#define ORANGE 4
#define NORMAL 5

float angle = 0.0f;

// actual vector representing the camera's direction
float lx = 0.0f, lz = -1.0f, ly = 0.0f;
// XYZ position of the camera
float x = 8.0f, z = 15.0f, y = -1.0f;
// float x = 0.0f, z = 5.0f, y=1.0f;

float px = 7.5f, py = -6.0f, pz = 0.0f;

float deltaAngle = 0.0f;
float deltaAngle1 = 0.0f;
float deltaMove = 0;
int xOrigin = -1;

float red = 0.8f, green = 0.8f, blue = 0.8f;