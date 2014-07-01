#include <string>

#ifndef TASK_ALREADY_DONE_H
#define TASK_ALREADY_DONE_H

class TaskAlreadyDone : public std::exception{

	public:
		TaskAlreadyDone(int ID);
		TaskAlreadyDone(const std::string & exc_msg);

};
	
#endif