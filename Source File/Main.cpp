
#include "Task.h"
#include "MinorProject.h"
#include "SimpleProject.h"
#include "CompositeProject.h"

#include <string>

using namespace std;

int main()
{

		// Create tasks
	Task* tasks[7];

	for (int i = 0; i != 7; ++i)
		tasks[i] = new Task();

	// Set prerequisites
	tasks[1]->addPrereq(tasks[0]);
	tasks[2]->addPrereq(tasks[1]);
	tasks[3]->addPrereq(tasks[2]);
	tasks[3]->addPrereq(tasks[4]);
	tasks[4]->addPrereq(tasks[0]);
	tasks[5]->addPrereq(tasks[4]);
	tasks[6]->addPrereq(tasks[3]);
	tasks[6]->addPrereq(tasks[5]);
	

	// Create projects
	MinorProject *mp1 = new MinorProject();
	mp1->addTask(tasks[1]);
	mp1->addTask(tasks[2]);
	mp1->addTask(tasks[3]);

	MinorProject *mp2 = new MinorProject();
	mp2->addTask(tasks[4]);
	mp2->addTask(tasks[5]);

	CompositeProject *cp = new CompositeProject();
	cp->addProject(new SimpleProject(tasks[0]));
	cp->addProject(mp1);
	cp->addProject(mp2);
	cp->addProject(new SimpleProject(tasks[6]));
		
	try {
		while (cp->tasksReady()){
			cp->doIt();
		}
	}catch(TaskNotReady tn){
		tn.what();
	}catch(TaskAlreadyDone td){
		td.what();
	}
	
			

	// Clean up
	delete cp;

	cout << "\nDone.";

	string DEBUG;
	cin >> DEBUG;

	return 0;
}

