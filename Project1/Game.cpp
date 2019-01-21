#include "Game.h"

void init(){
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);

	glLightfv(GL_LIGHT0, GL_AMBIENT, lightAmb);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightDif);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
	glLightfv(GL_LIGHT0, GL_SPECULAR, lightSpec);
	glEnable(GL_LIGHT0);

	glMaterialfv(GL_FRONT, GL_SPECULAR, lightSpec);
	glMateriali(GL_FRONT, GL_SHININESS, 64);

	glEnable(GL_COLOR_MATERIAL);
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
}

void drawBullet(){
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


void keyboard(unsigned char c, int x, int y)
{
	switch (c) {
	case 27:
		exit(0);
	case 'a':
		px -= 0.3f;
		bx -= 0.3f;
		std::cout << "A is pressed" << std::endl;
		glutPostRedisplay();
		break;
	case 'd':
		px += 0.3f;
		bx += 0.3f;
		std::cout << "D is pressed" << std::endl;
		glutPostRedisplay();
		break;
	case 32:
		std::cout << "Space pressed" << std::endl;
			shot = 1;
		break;
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
	glDisable(GL_LIGHTING);
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

	przec1->renderEnemy();
	przec2->renderEnemy();
	przec3->renderEnemy();
	przec4->renderEnemy();
	przec5->renderEnemy();
	przec6->renderEnemy();
	przec7->renderEnemy();
	przec8->renderEnemy();
	przec9->renderEnemy();
	przec10->renderEnemy();
	przec11->renderEnemy();
	przec12->renderEnemy();
	przec13->renderEnemy();
	przec14->renderEnemy();
	przec15->renderEnemy();
	przec16->renderEnemy();
	przec17->renderEnemy();
	przec18->renderEnemy();
	przec19->renderEnemy();
	przec20->renderEnemy();
	przec21->renderEnemy();
	przec22->renderEnemy();
	przec23->renderEnemy();
	przec24->renderEnemy();
	przec25->renderEnemy();
	przec26->renderEnemy();
	przec27->renderEnemy();
	przec28->renderEnemy();
	przec29->renderEnemy();
	przec30->renderEnemy();
	przec31->renderEnemy();
	przec32->renderEnemy();
	przec33->renderEnemy();
	przec34->renderEnemy();
	przec35->renderEnemy();
	przec36->renderEnemy();

	glPushMatrix();
	glTranslatef(px, py, pz);
	drawPlayer();
	glPopMatrix();

	if(shot == 1)
	{

		glPushMatrix();
		glTranslatef(bx, by, bz);
		drawBullet();
		glPopMatrix();
	}

	glEnable(GL_LIGHTING);
	glutSwapBuffers();
}

void pressKey(int key, int xx, int yy) {

	switch (key) {
	case 27:
		exit(0);
		delete przec1;
		delete przec2;
		delete przec3;
		delete przec4;
		delete przec5;
		delete przec6;
		delete przec7;
		delete przec8;
		delete przec9;
		delete przec10;
		delete przec11;
		delete przec12;
		delete przec13;
		delete przec14;
		delete przec15;
		delete przec16;
		delete przec17;
		delete przec18;
		delete przec19;
		delete przec20;
		delete przec21;
		delete przec22;
		delete przec23;
		delete przec24;
		delete przec25;
		delete przec26;
		delete przec27;
		delete przec28;
		delete przec29;
		delete przec30;
		delete przec31;
		delete przec32;
		delete przec33;
		delete przec34;
		delete przec35;
		delete przec36;

	case GLUT_KEY_LEFT: deltaAngle = -0.1f; break;
	case GLUT_KEY_RIGHT: deltaAngle = 0.1f; break;
	case GLUT_KEY_UP: deltaMove = 2.0f; break;
	case GLUT_KEY_DOWN: deltaMove = -0.5f; break;
	case GLUT_KEY_CTRL_L: deltaAngle1 = -0.05f; break;
	case GLUT_KEY_SHIFT_L: deltaAngle1 = 0.05f; break;
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


void ZegarFun(int val) {
	/* "Rotacja" koloru */
	if(shot==1){
		if(by<6.0f) {
			by += 0.1f;
		}
		else {
		    shot = 0;
            by = -4.0f;

		}
	}
    std::cout << "Shot = " << shot << std::endl;
    std::cout << "Bullet Y = " << by << std::endl;
	przec1->updateEnemy();
	przec2->updateEnemy();
	przec3->updateEnemy();
	przec4->updateEnemy();
	przec5->updateEnemy();
	przec6->updateEnemy();
	przec7->updateEnemy();
	przec8->updateEnemy();
	przec9->updateEnemy();
	przec10->updateEnemy();
	przec11->updateEnemy();
	przec12->updateEnemy();
	przec13->updateEnemy();
	przec14->updateEnemy();
	przec15->updateEnemy();
	przec16->updateEnemy();
	przec17->updateEnemy();
	przec18->updateEnemy();
	przec19->updateEnemy();
	przec20->updateEnemy();
	przec21->updateEnemy();
	przec22->updateEnemy();
	przec23->updateEnemy();
	przec24->updateEnemy();
	przec25->updateEnemy();
	przec26->updateEnemy();
	przec27->updateEnemy();
	przec28->updateEnemy();
	przec29->updateEnemy();
	przec30->updateEnemy();
	przec31->updateEnemy();
	przec32->updateEnemy();
	przec33->updateEnemy();
	przec34->updateEnemy();
	przec35->updateEnemy();
	przec36->updateEnemy();

	/* Odrysowanie sceny: */
	glutPostRedisplay();
	/* Ponowne wystartowanie zegara: */
	glutTimerFunc(1000/ANIM_FPS, ZegarFun, 0);
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
	glutTimerFunc(1000/ANIM_FPS, ZegarFun, 0);

	//glEnable(GL_DEPTH_TEST);

	init();

	glutMainLoop();
	return 0;
}
