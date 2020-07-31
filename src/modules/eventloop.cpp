#include "eventloop.h"
#include <GL/glut.h>
#include <iostream>

void EventLoop::start(int argc, char **argv) {

    std::string window_name = "FPS";

    glutInit(&argc, argv);

    int screen_width = glutGet(GLUT_SCREEN_WIDTH);
    int screen_height = glutGet(GLUT_SCREEN_HEIGHT);

    glutInitWindowSize(screen_width, screen_height);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_DOUBLE && GLUT_RGBA);

    int window_id = glutCreateWindow(window_name.c_str());

    glutSetWindowTitle(window_name.c_str());
    glutSetIconTitle(window_name.c_str());
    glutFullScreen();
    glutSetCursor(GLUT_CURSOR_NONE);
    glutDisplayFunc(&EventLoop::on_display);
    glutKeyboardFunc(&EventLoop::on_keyboard);
    glutMouseFunc(&EventLoop::on_mouse);
    glutSpecialFunc(&EventLoop::on_special);
    glutMainLoop();

}

void EventLoop::on_display() {

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(0.5, 0.0, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
        glVertex3f(0.0, 0.5, 0.0);
    glEnd();
    glFlush();
}

void EventLoop::on_keyboard(unsigned char key, int x, int y) {

    std::cout << key << " " << x << " " << y <<std::endl;
}

void EventLoop::on_mouse(int button, int state, int x, int y) {

    std::cout << button << " " << state << " " << x << " " << y <<std::endl;
}

void EventLoop::on_special(int key, int x, int y) {

    std::cout << key << " " << x << " " << y <<std::endl;
}
