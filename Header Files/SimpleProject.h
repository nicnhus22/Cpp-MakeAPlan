
#include "Project.h"
#include "Task.h"

#include <iostream>
#include <vector>

#ifndef SIMPLE_PROJECT_H
#define SIMPLE_PROJECT_H

class SimpleProject : public Project {

	public:
		SimpleProject(Task *pt);
		~SimpleProject();
		bool tasksReady();
		void doIt();
		
	private:
		Task *task;
};
	
#endif