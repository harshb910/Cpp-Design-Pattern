#include <iostream>
#include <thread>
#include "logger.hpp"

using namespace std;

/**
 * user1Log is a simple function that gets the Logger instance and logs the message "Hello World 1".
 * It is used to demonstrate the Singleton design pattern in a multi-threaded environment.
 */
void user1Log(){
    Logger* user1 = Logger::getLogger();
    user1->log("Hello World 1");
}

void user2Log(){
    Logger* user2 = Logger::getLogger();
    user2->log("Hello World 2");
}

/**
 * This is the main function of the program.
 * It creates two threads, t1 and t2, and starts them.
 * t1 calls the user1Log() function, and t2 calls the user2Log() function.
 * After starting the threads, the main function waits for them to finish with the join() method.
 * Once both threads have finished, the main function returns 0, indicating successful execution.
 */
int main(){
    thread t1(user1Log);
    thread t2(user2Log);
    t1.join();
    t2.join();
    return 0;
}