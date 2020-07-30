#include <iostream>
#include <sqlite3.h>
#include <GL/glut.h>

char *window_name = "FPS";

void display() {

}

void keyboard(unsigned char key, int x, int y) {

    std::cout << key << " " << x << " " << y <<std::endl;
}

void mouse(int button, int state, int x, int y) {

    std::cout << button << " " << state << " " << x << " " << y <<std::endl;
}

void special(int key, int x, int y) {

    std::cout << key << " " << x << " " << y <<std::endl;
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);

    int screen_width = glutGet(GLUT_SCREEN_WIDTH);
    int screen_height = glutGet(GLUT_SCREEN_HEIGHT);

    glutInitWindowSize(screen_width, screen_height);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_DOUBLE && GLUT_RGBA);

    int window_id = glutCreateWindow(window_name);
    glutSetWindowTitle(window_name);
    glutSetIconTitle(window_name);
    glutFullScreen();
    glutSetCursor(GLUT_CURSOR_NONE);
    glutDisplayFunc(*display);
    glutKeyboardFunc(*keyboard);
    glutMouseFunc(*mouse);
    glutSpecialFunc(*special);

    glutMainLoop();

    glutDestroyWindow(window_id);

    return 0;
}
