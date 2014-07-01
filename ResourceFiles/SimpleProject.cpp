
#include "SimpleProject.h"

using namespace std;

SimpleProject::SimpleProject(Task *pt) : task(pt) {
	cout << "[SimpleProjectConstructor]: Creating project" << endl;
}

SimpleProject::~SimpleProject(){
	cout << "[SimpleProjectDestructor]: Deleting project" << endl;
	delete task;
}

bool SimpleProject::tasksReady(){
	return task->ready();
}

void SimpleProject::doIt(){
	task->doIt();	
}
