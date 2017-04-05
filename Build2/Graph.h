#pragma once
#ifndef Graph_h
#define Graph_h
#pragma once
#include <iostream>
#include <vector>
#include<iterator>
#include <map>
#include "Subject.h"
#include "City.h"


struct vertex {
	//typedef pair<int, vertex*> ve;
	vector<vertex*> adj; //destination vertex
	City* name;
	vertex(City* s) : name(s) {}
	virtual ~vertex();
};

class Graph: public Subject
{
protected:
	typedef map<City*, vertex *> cMap;
	//vmap work;
	cMap cityMap;
	vector <City*> cityInGraph;
public:
	Graph();
	Graph(vector<City*>cityVector);
	void addC(vector<City*>cityVector);
	//Graph(vector<City*>);
	virtual ~Graph();
	//typedef map<string, vertex *> vmap;
	void cityAdjacency(City* c);
	void cityWithAdjacency();
	void cityAndConnection();
	void cityConnection(City* c);
	void showCity();
	void showCityInfo(City* cityname);
	void addCityToGraph(City*);
	void printGraph();
	void move(City* f, City* t);
	void addedge(City* from, City* to);
	void getCityEdge(City*);
	void createMap();
	bool operator==(City&);
	//void drive(Pawn *);
	//void shuttleFlight(Pawn*);
	//void charterFlight(Pawn*);
	//void directFlight(Pawn*p);

};


#endif 
