#pragma once
#include"Observer.h"
#include "Graph.h"
#include<iostream>
class GraphView: public Observer
{
public:
	GraphView();
	GraphView(Graph*);
	~GraphView();
	void UpdateMap();
	void display(); 
private:
	Graph* _subject;
};

