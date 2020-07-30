#include "eventloop.h"

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
