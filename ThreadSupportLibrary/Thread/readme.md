#### Thread()
Constructs new thread object.

1) Creates new thread object which does not represent a thread.
2) Move constructor. Constructs the thread object to represent the thread of execution that was represented by other. After this call other no longer represents a thread of execution.
3) Creates new std::thread object and associates it with a thread of execution. The new thread of execution starts executing