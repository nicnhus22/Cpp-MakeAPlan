
#include "TaskNotReady.h"
#include "TaskAlreadyDone.h"


#include <vector>

#ifndef TASK_H
#define TASK_H

class Task {

	public:
		Task();
		~Task();
		void addPrereq(Task *pt);
		bool ready();
		bool done ();
		void doIt () throw(TaskAlreadyDone,TaskNotReady);
		void setOwner();std::vector<Task*> prereqList;
		
	private:
		int taskID;
		static int taskCounter;
		std::vector<Task*> imInPrereqList;
		
		bool isDone;
		bool owner;
};

	
#endif