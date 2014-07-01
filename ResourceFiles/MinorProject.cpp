
#include "MinorProject.h"

using namespace std;

MinorProject::MinorProject() : tasks() { 
	cout << "[MinorProjectConstructor]: Creating project" << endl;
}

MinorProject::~MinorProject(){
	cout << "[MinorProjectDestructor]: Deleting project" << endl;

	// Delete all the pointers to Task objects pointed by the MinorProject
	for(vector<Task*>::size_type i=0; i!= (this->tasks).size(); ++i)
		delete tasks[i];
}

void MinorProject::addTask(Task *pt) {
	cout << "[MinorProjectAddTask]: Adding task to minor project." << endl;
	pt->setOwner();
	tasks.push_back(pt);
}

bool MinorProject::tasksReady(){
	for(vector<Task*>::size_type i = 0; i != tasks.size(); ++i){
		if(tasks[i]->ready())
			return true;
	}

	return false;
}

void MinorProject::doIt(){
	for(vector<Task*>::size_type i = 0; i != tasks.size(); ++i){
		tasks[i]->doIt();
	}
}
