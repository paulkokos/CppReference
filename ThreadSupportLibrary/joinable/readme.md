# joinable()

Checks if the std::thread object identifies an active thread of execution. Specifically, returns true if get_id() != std::thread::id(). So a default constructed thread is not joinable.

A thread that has finished executing code, but has not yet been joined is still considered an active thread of execution and is therefore joinable.