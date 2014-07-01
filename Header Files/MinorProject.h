
#include "Project.h"

#include <vector>

#ifndef MINOR_PROJECT_H
#define MINOR_PROJECT_H

class MinorProject : public Project {

	public:
		MinorProject();
		~MinorProject();
		bool tasksReady();
		void doIt();
		void addTask(Task *pt);
		
	private:
		std::vector<Task*> tasks;

};
	
#endif