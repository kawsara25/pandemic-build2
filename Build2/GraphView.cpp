#include "GraphView.h"


GraphView::GraphView()
{
}

GraphView::GraphView(Graph* s)
{
	_subject = s;
	_subject->Attach(this);
}
GraphView::~GraphView()
{
	_subject->Detach(this);
}
void GraphView::Update(){
	//Called by Notify() when state of Subject changes
	display();
};
void GraphView::display(){
	//_subject->showCity();
	_subject->cityWithAdjacency();
	_subject->cityAndConnection();
	
}
