
#include "Project.h"

#include <vector>

#ifndef COMPOSITE_PROJECT_H
#define COMPOSITE_PROJECT_H

class CompositeProject : public Project {

	public:
		CompositeProject();
		~CompositeProject();
		bool tasksReady();
		void doIt();
		void addProject(Project *pp);
		
	private:
		std::vector<Project*> projectSet;
};
	
#endif