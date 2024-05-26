#include "widget.h"
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <game.h>
#include <npc.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();


    Game game;
    game.show();




    return a.exec();
}
