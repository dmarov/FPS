#ifndef EVENTLOOP_H_
#define EVENTLOOP_H_

#include <GL/glut.h>
#include <iostream>

class EventLoop {

private:
    int window_id;
    char *window_name = "FPS";
    static EventLoop *instance;

public:
    EventLoop(int argc, char **argv) {

        glutInit(&argc, argv);

        int screen_width = glutGet(GLUT_SCREEN_WIDTH);
        int screen_height = glutGet(GLUT_SCREEN_HEIGHT);

        glutInitWindowSize(screen_width, screen_height);
        glutInitWindowPosition(0,0);
        glutInitDisplayMode(GLUT_DOUBLE && GLUT_RGBA);

        this->window_id = glutCreateWindow(this->window_name);

        glutSetWindowTitle(this->window_name);
        glutSetIconTitle(this->window_name);
        glutFullScreen();
        glutSetCursor(GLUT_CURSOR_NONE);
        glutDisplayFunc(&EventLoop::on_display);
        glutKeyboardFunc(&EventLoop::on_keyboard);
        glutMouseFunc(&EventLoop::on_mouse);
        glutSpecialFunc(&EventLoop::on_special);
    }

public:
    void start() {

        glutMainLoop();
    }

public:

    static void on_display() {

    }

    static void on_keyboard(unsigned char key, int x, int y) {

        std::cout << key << " " << x << " " << y <<std::endl;
    }

    static void on_mouse(int button, int state, int x, int y) {

        std::cout << button << " " << state << " " << x << " " << y <<std::endl;
    }

    static void on_special(int key, int x, int y) {

        std::cout << key << " " << x << " " << y <<std::endl;
    }

    ~EventLoop() {

        glutDestroyWindow(this->window_id);
    }
};

#endif
