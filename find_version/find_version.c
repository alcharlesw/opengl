#include <stdio.h>
#include <GL/glut.h>

main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("red 3D lighted cube");
    printf("GL_VERSION = %s\n", glGetString(GL_VERSION));
    return 0;
}
