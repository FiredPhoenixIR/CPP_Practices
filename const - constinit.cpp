#include<iostream>

/*
constinit is used to specify that an object must be initialized as if by static initialization. 
It ensures that an object is initialized only once and in a thread-safe manner, 
typically during program startup. 
This is particularly useful for global variables or variables with static storage duration.
*/

/*
Thread safety refers to the property of a program or a piece of code being able to execute correctly and produce consistent results 
when accessed concurrently by multiple threads in a parallel or concurrent execution environment, 
such as a multi-threaded application.
*/

/*
The variable is initialized only once, regardless of how many threads are trying to access it.

If multiple threads attempt to access the variable simultaneously during initialization, 
their access won't lead to data races or other synchronization issues.

The state of the variable remains consistent across all threads after initialization.

*/