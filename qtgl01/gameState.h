#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <vector>

#include "players.h"
#include "floors.h"
#include "movingobjects.h"
#include "staticobjects.h"
#include <QtEvents>

class GameState
{
private:
    enum GameStages{ GS_Title , GS_Gaming, GS_Pasted, GS_ScoreBoard ,GS_GameEnd };

public:

    GameState(const unsigned int WIDTH, const unsigned int HEIGHT);

    void renderLiveObjs();
    void updateObjs(const long MS);

    void addMovingObj(MovingObjects *);
    void keyboardEvent(const QKeyEvent *);
    void setGameWidgetHeight(const unsigned int );
    void setGameWidgetWidth(const unsigned int );
    inline
    bool isPasted(){return currStage==GS_Pasted;}

    inline
    GameStages getGSGaming(){return GS_Gaming;}
    inline
    GameStages getGSPasted(){return GS_Pasted;}
    inline
    GameStages getGSTitle(){return GS_Title; }

private:

    Players& play1;
    Floors floor;

    std::vector<MovingObjects *> movingObjsList;
    std::vector<StaticObjects *> staticObjsList;

    unsigned int gameWidgetHeight;
    unsigned int gameWidgetWidth;

    GameStages currStage;

};

#endif // GAMESTATE_H
