
#include "CompositeProject.h"
#include <iostream>

using namespace std;

CompositeProject::CompositeProject() : projectSet() { 
	cout << "[CompositeProjectConstructor]: Creating project" << endl;
}

CompositeProject::~CompositeProject(){
	cout << "[CompositeProjectDestructor]: Deleting project" << endl;

	// Delete all the pointers to Project objects, which is gonna use polymorphism to
	// call the child destructor
	for(vector<Project*>::size_type i=0; i != (this->projectSet).size(); ++i)
		delete projectSet[i];
}

/*
 *	Add a project to the projectSet vector and set owner
 */
void CompositeProject::addProject(Project *pp){
	cout << "[CompositeProjectAddProject]: Adding project to composite project." << endl;
	pp->setOwner();
	projectSet.push_back(pp);
}

/*
 *	Returns true as long as there are tasks ready to perform in the projectSet vector
 *	holding the different projects.
 */
bool CompositeProject::tasksReady(){
	for(vector<Task*>::size_type i = 0; i != projectSet.size(); ++i){
		if(projectSet[i]->tasksReady()){
			return true;
		}
	}
	return false;
}

/*
 *	Actually do the project by looping in the projectSet and calling doIt from the tasks
 */
void CompositeProject::doIt(){
	for(vector<Task*>::size_type i = 0; i != projectSet.size(); ++i){
		projectSet[i]->doIt();
	}		

}
