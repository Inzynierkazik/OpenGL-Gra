#include "Game.h"

void keyboard(unsigned char c, int x, int y)
{
	switch (c) {
	case 27:
		exit(0);
	case 'a':
		px -= 0.1f;
		std::cout << "A is pressed" << std::endl;
		glutPostRedisplay();
		break;
	case 'd':
		px += 0.1f;
		std::cout << "D is pressed" << std::endl;
		glutPostRedisplay();
		break;
	case 32:
		std::cout << "Space pressed" << std::endl;
		break;
	default: ;
	}
}

void mouse(int button, int state, int x, int y) {

	// only start motion if the left button is pressed
	if (button == GLUT_LEFT_BUTTON) {

		// when the button is released
		if (state == GLUT_UP) {
			angle += deltaAngle;
			xOrigin = -1;
		}
		else {// state = GLUT_DOWN
			xOrigin = x;
			deltaAngle = 0.0f;
		}
	}
}

void mouseMove(int x, int y) {

	// this will only be true when the left button is down
	if (xOrigin >= 0) {

		// update deltaAngle
		deltaAngle = (x - xOrigin) * 0.001f;

		// update camera's direction
		lx = sin(angle + deltaAngle);
		lz = -cos(angle + deltaAngle);
	}
}

void changeSize(int w, int h)
{
	if (h == 0)
		h = 1;
	float ratio = w * 1.0 / h;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, w, h);
	gluPerspective(45, ratio, 1, 100);
	glMatrixMode(GL_MODELVIEW);
}


void drawPlayer() {
	
	glColor3f(0.0f, 1.0f, 0.2f);

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
	//-----------------------------------------
	glTranslatef(-0.5f, -0.1f, 0.0f);
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
	//------------------------------------------
	glTranslatef(-0.9f, -0.1f, 0.0f);
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
	//------------------------------------------
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
	//------------------------------------------
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




}

void drawEnemy() {

	glColor3f(red, green, blue);

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

void computePos(float deltaMove) {

	x += deltaMove * lx * 0.1f;
	z += deltaMove * lz * 0.1f;
	y += deltaMove * ly * 0.1f;
}

void computeDir(float deltaAngle) {

	angle += deltaAngle;
	lx = sin(angle);
	lz = -cos(angle);
	//ly = sin(angle);
}

void computeDir1(float deltaAngle1) {

	angle += deltaAngle1;
	//lz = -cos(angle);
	ly = sin(angle);
}

void render()
{

	if (deltaMove)
		computePos(deltaMove);
	if (deltaAngle)
		computeDir(deltaAngle);
	if (deltaAngle1)
		computeDir1(deltaAngle1);

	//glutFullScreen();

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glLoadIdentity();

	gluLookAt(x, y, z,
		x + lx, y + ly, z + lz,
		0.0f, 1.0f, 0.0f);

	// glColor3f(0.5f, 0.5f, 0.5f);
	// glBegin(GL_QUADS);
	// glVertex3f(-100.0f, 0.0f, -100.0f);
	// glVertex3f(-100.0f, 0.0f, 100.0f);
	// glVertex3f(100.0f, 0.0f, 100.0f);
	// glVertex3f(100.0f, 0.0f, -100.0f);
	// glEnd();

	for (int i = 0; i < 11; i++)
		for (int j = 0; j < 3; j++) {
			glPushMatrix();
			glTranslatef(i*1.5, j*1.0, 0.0f);
			drawEnemy();
			glPopMatrix();
		}
	glPushMatrix();
	glTranslatef(px, py, pz);
	drawPlayer();
	glPopMatrix();


	glutSwapBuffers();
}

void pressKey(int key, int xx, int yy) {

	switch (key) {
	case 27: exit(0);
	case GLUT_KEY_LEFT: deltaAngle = -0.01f; break;
	case GLUT_KEY_RIGHT: deltaAngle = 0.01f; break;
	case GLUT_KEY_UP: deltaMove = 2.0f; break;
	case GLUT_KEY_DOWN: deltaMove = -0.5f; break;
	case GLUT_KEY_CTRL_L: deltaAngle1 = -0.01f; break;
	case GLUT_KEY_SHIFT_L: deltaAngle1 = 0.01f; break;
	default: ;
	}
}

//funkcja obs³uguj¹ca puszczenie klawisza przez gracza
void releaseKey(int key, int x, int y) {

	switch (key) {
	case GLUT_KEY_LEFT:
	case GLUT_KEY_RIGHT: deltaAngle = 0.0f; break;
	case GLUT_KEY_UP:
	case GLUT_KEY_DOWN: deltaMove = 0; break;
	case GLUT_KEY_CTRL_L:
	case GLUT_KEY_SHIFT_L: deltaAngle1 = 0.0f; break;
	default: ;
	}
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1280, 720);
	glutCreateWindow("Test");

	glutDisplayFunc(render);
	glutReshapeFunc(changeSize);

	glutIdleFunc(render);

	glutKeyboardFunc(keyboard);
	glutSpecialFunc(pressKey);
	glutIgnoreKeyRepeat(0);
	glutSpecialUpFunc(releaseKey);
	glutMouseFunc(mouse);
	glutMotionFunc(mouseMove);

	glEnable(GL_DEPTH_TEST);

	glutMainLoop();
	return 0;
}