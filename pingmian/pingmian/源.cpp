#include <GL/glut.h>

void myDisplay(void)

{
	  glClear(GL_COLOR_BUFFER_BIT);

     glRectf(-0.5f, -0.5f, 0.5f, 0.5f);

     glFlush();

	 glBegin(GL_QUADS);

     glVertex3i(-1,0,1); // 左上顶点
     glVertex3i(1,0,1); // 右上顶点
     glVertex3i( 1,0,-1); // 右下顶点
     glVertex3i(-1, 0, 1); // 左下顶点
    
	 glEnd();
}

int main(int argc, char *argv[])

{

     glutInit(&argc, argv);

     glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

	 glutInitWindowPosition(100, 100);

     glutInitWindowSize(400, 400);

     glutCreateWindow("平面");

     glutDisplayFunc(&myDisplay);

     glutMainLoop();

     return 0;

}