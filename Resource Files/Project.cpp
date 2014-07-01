
#include "Project.h"

Project::Project() : owner(false){ }

Project::~Project(){  }

void Project::setOwner(){
	owner = true;
}
