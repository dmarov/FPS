#ifndef EVENTLOOP_H_
#define EVENTLOOP_H_

#include <GL/glut.h>
#include <iostream>
#include <string>

class EventLoop {

public:
    static void start(int argc, char **argv) {

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

private:
    static void on_display();
    static void on_keyboard(unsigned char key, int x, int y);
    static void on_mouse(int button, int state, int x, int y);
    static void on_special(int key, int x, int y);
};

#endif
