
#include "TaskAlreadyDone.h"
#include <string>
#include <iostream>

TaskAlreadyDone::TaskAlreadyDone(int ID){
	std::cout << "\nException: TaskAlreadyDone.\nDetail: The task "<<ID<<" was already performed.\n\n";
}

TaskAlreadyDone::TaskAlreadyDone(const std::string & exc_msg){
	std::cout << exc_msg;
}