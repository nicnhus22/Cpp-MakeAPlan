
#include <string>
#include <stdexcept>

#ifndef TASK_NOT_READY_H
#define TASK_NOT_READY_H

class TaskNotReady : public std::exception{

	public:
		TaskNotReady(int ID);
		TaskNotReady(const std::string & exc_msg);

};
	
#endif