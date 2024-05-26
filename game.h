#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "character.h"
#include "npc.h"

class Game : public QGraphicsView
{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);

private:
    QGraphicsScene *scene;
    Character *character;
    NPC *npc;

};


#endif // GAME_H
