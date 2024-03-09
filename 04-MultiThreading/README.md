In every application there is a default thread which is __main()__
Inside main() we create other threads.

A thread is a lightweight process to achieve parallelism by dividing a process into multiple threads.

Example: web browser which has multiple tabs, ms word, visual studio code.

Ways to create threads:

__1. Function Pointers__

__2. Lambda Functions__

__3. Functors__

__4. Member Functions__

__5. Static Member Functions__

__Join()__
Once a thread is started we wait for this thread to finish by calling join() on thread object.
Double join will result in program termination.
If needed thread should be checked "is joinable" using __joinable()__ before joining.

__Detach()__
This is used to detach newly created thread from the parent thread.
Always check before detaching a thread that it is joinable.
If a thread is detached and the main() is retruning, then the thread execution is suspended.

>>Either join() or detach() should be called on thread object, otherwise during thread object's destructor will terminate the program.
Because inside the destructor, thread is checked if joinable or not. If yes, then program terminates.

__MUTEX (Mutual Exclusion)__ A mutex a way to protect shared data from being accessed currently by multiple threads, which lead to data race conditon and inconsistent states.

Race condition: A condition where two or more threads happen to change a common data at the same time. If there is a race condition, we have to protect it and the protected section is called CRITICAL SECTION.
__Mutex__ is used to avoid race condition using lock() and unlock().

__Mutex lock(), unlock() :__   It acts as a gate keeper to a section of code allowing one thread in and blocking access to all others.

__Mutex try_lock() :__ It tries to lock the mutex and returns immediately. On successful lock acquisition, returns true else false. If try_lock() is unable to lock mutex then it doesn't get blocked.
If try_lock() is called multiple times by the same thread which owns the mutex, it is a deadlock situation with undefined behavior.  

Non blocking mutex lock :

Types of try-lock functions:

1. try_lock

2. mutex::try_lock

3. shared_lock::try_lock

4. timed_mutex::try_lock

5. unique_lock::try_lock

6. shared_mutex::try_lock

7. recursive_mutex::try_lock

8. shared_timed_mutex::try_lock

9. recursive_timed_mutex::try_lock







