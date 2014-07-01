
#include "Task.h"
#include "TaskNotReady.h"
#include "TaskAlreadyDone.h"

#include <iostream>

using namespace std;

int Task::taskCounter = 0;

/*
 *	Default Constructor
 */
Task::Task() : taskID(taskCounter++), prereqList(), isDone(false), owner(false){ 
}

/*
 *	Destructor
 */
Task::~Task(){
	cout << "[Task Deleted] Task " << this->taskID << endl;
}

/*
 *	Add prerequesit to the newly created task
 */
void Task::addPrereq(Task *pt){
	pt->imInPrereqList.push_back(this);
	this->prereqList.push_back(pt);
}

/*
 *	Returns true if the task is ready. False otherwise.
 */
bool Task::ready() {
	return (this->prereqList.size() == 0 && !done());
}

/*
 *	Returns true if the task was already done. False otherwise.
 */
bool Task::done () { 
	return isDone;
}

/*
 *	Perform the task and throw exceptions if needed.
 */
void Task::doIt () throw(TaskAlreadyDone,TaskNotReady) {

	if(done()){
		//cout << "Task already done ID "  << taskID <<endl;
		throw new TaskAlreadyDone(taskID);
	}else if(!ready()){
		//cout << "Task not ready to go ID "  << taskID <<endl;
		this->isDone = false;
		throw new TaskNotReady(taskID);
	}else {

		cout << "[Doing Task] Task "<< taskID <<endl;

		// Remove myself from all the prereq list
		for(vector<Task*>::size_type i=0; i != this->imInPrereqList.size(); ++i){
			imInPrereqList[i]->prereqList.pop_back();
		}
		
		this->isDone = true;
		cout << "[Task Done] Task " << taskID <<endl;
	}

}

void Task::setOwner(){
	owner = true;
}




