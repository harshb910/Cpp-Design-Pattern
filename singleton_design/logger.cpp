#include<iostream>
#include<mutex>
#include "logger.hpp"

using namespace std;

int Logger::cnt = 0;
Logger* Logger::loggerInstance = nullptr;
mutex Logger::mtx;

/**
 * Constructor for Logger class. 
 * This constructor is private and can only be accessed through the getLogger() method.
 * It increments the count of the number of Logger instances created and prints a message to the console.
 */
Logger::Logger() {
    cnt++;
    cout<<"Logger instance is created: "<<cnt<<endl;
}


/**
 * Logs a message to the console.
 * @param msg  the message to be logged
 */
void Logger::log(string msg) {
    cout<<msg<<endl;
}


/*************  ✨ Codeium Command ⭐  *************/
/**
 * Returns the single instance of the Logger.
 * This method uses double-checked locking to optimize the creation of the Logger instance.
 * If the Logger instance is not created, this method creates it and locks the mutex to ensure thread safety.
 * @return  the single instance of the Logger.

 This is an implementation of the Singleton design pattern in C++. The getLogger() method returns the single instance of the Logger class, creating it if it doesn't exist. It uses double-checked locking with a mutex (mtx) to ensure thread safety.

In simpler terms, it ensures that only one Logger instance is created, even in a multi-threaded environment.
 */
Logger* Logger::getLogger() {
    if(loggerInstance == nullptr) {
        mtx.lock();
        if(loggerInstance == nullptr) {
            loggerInstance = new Logger();
        }
        mtx.unlock();
    }
    return loggerInstance;
}