#include "ashuradll.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AshuraDLL w;
    w.show();

    return a.exec();
}
