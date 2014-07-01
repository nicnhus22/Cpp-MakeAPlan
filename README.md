Cpp-MakeAPlan
=============

Project management system to keep track of tasks and subtasks. For this, I implemented the classes Task, Project, SimpleProject, MinorProject, and CompositeProject to create tasks, projects and nest them together.

You can:

<b>Create tasks</b><br/>
<code>Task *task1 = new Task();</code>
<code>Task *task2 = new Task();</code>

<b>Add prerequesits to your tasks</b><br/>
<code>task->addPrereq(task2);</code>

<b>Create MinorProject</b><br/>
<code>MinorProject *mp1 = new MinorProject();</code>
<code>MinorProject *mp2 = new MinorProject();</code>

<b>Create CompositeProjects</b><br/>
<code>CompositeProject *cp = new CompositeProject();</code>

<b>Add projects to CompositeProjects</b><br/>
<code>
<pre>
cp->addProject(mp1);
// Short hand notation to add SimpleProject with a task into CompositeProject
cp->addProject(new SimpleProject(task1))
</pre>
</code>

<b>Perform tasks and check if they are ready to be performed</b><br/>
<code>
<pre>
while(cp->tasksReady()){
  // Will use polymorphism to call doIt on each project and tasks
  cp->doIt();
}
</pre>
</code>
