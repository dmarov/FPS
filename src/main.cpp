#include <sqlite3.h>
#include "modules/eventloop.h"

int main(int argc, char **argv)
{
    EventLoop loop(argc, argv);
    loop.start();

    return 0;
}
