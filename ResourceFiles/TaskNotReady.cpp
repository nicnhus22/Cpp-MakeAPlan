
#include "TaskNotReady.h"
#include <string>
#include <iostream>

TaskNotReady::TaskNotReady(int ID) {
	std::cout << "\nException: TaskNotReady.\nDetail: The task "<<ID<<"  is not ready to be performed.\n\n";
}

TaskNotReady::TaskNotReady(const std::string & exc_msg){
	std::cout << exc_msg;
}