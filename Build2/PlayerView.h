//**********************************************
//COMP345 BUILD 1
//Winter 2017
//Team Buffalos
//**********************************************
//
//PlayerView.h

#ifndef PlayerView_h
#define PlayerView_h

#include <iostream>
#include <string>
//#include "City.h"
#include "Player.h"
#include "Graph.h"
#include <vector>
#include <iterator>


class PlayerView : public Observer{
public:
    PlayerView(); //default constructor
    PlayerView(Player *plyr);
    ~PlayerView();
    void Update();
    void UpdateHand();
    void UpdateDiscardHand();
    void UpdateEpidemicCard();
    void display();
    void displayHand();
    void displayDiscardHand();
    void displayEpidemicCard();
protected:
    Player* p;

};
class GraphView: public Observer
{
public:
	GraphView();
	GraphView(Graph*);
	~GraphView();
	void UpdateMap();
	void displayMap(); 
private:
	Graph* _subject;
};


#endif /* PlayerView_h */
