Cpp-MakeAPlan
=============

Project management system to keep track of tasks and subtasks. For this, I implemented the classes Task, Project, SimpleProject, MinorProject, and CompositeProject to create tasks, projects and nest them together.

You can:

<b>Create tasks</b><br/>
```
Task *task1 = new Task();
Task *task2 = new Task();
```

<b>Add prerequesits to your tasks</b><br/>
```
task->addPrereq(task2);
```

<b>Create MinorProject</b><br/>
```
MinorProject *mp1 = new MinorProject();
MinorProject *mp2 = new MinorProject();
```

<b>Create CompositeProjects</b><br/>
```
CompositeProject *cp = new CompositeProject();
```

<b>Add projects to CompositeProjects</b><br/>
```
cp->addProject(mp1);
// Short hand notation to add SimpleProject with a task into CompositeProject
cp->addProject(new SimpleProject(task1))
```

<b>Perform tasks and check if they are ready to be performed</b><br/>
```
while(cp->tasksReady()){
  // Will use polymorphism to call doIt on each project and tasks
  cp->doIt();
}
```
