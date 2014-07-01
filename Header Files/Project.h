
#include "Task.h"

#include <iostream>
#include <vector>

#ifndef PROJECT_H
#define PROJECT_H

class CompositeProject;

class Project {

	public:
		Project();
		virtual ~Project();
		virtual bool tasksReady()=0;
		virtual void doIt()=0;
		void setOwner();

	private:
		bool owner;
};

	
#endif