#ifndef logger_hpp
#define logger_hpp

#include<string>
#include<mutex>
using namespace std;

/*This class definition defines a Logger class that implements the Singleton design pattern, 
ensuring only one instance of the Logger exists throughout the program. Here's a brief explanation of each class method:

Logger(Logger const&);: A private copy constructor to prevent copying of the Logger instance.
void operator=(Logger const&);: A private assignment operator to prevent assignment of the Logger instance.
Logger();: A private constructor to create a new Logger instance.
static Logger* getLogger();: A public static method that returns the single instance of the Logger, creating it if it doesn't exist.
void log(string msg);: A public method that logs a message to the console.*/
class Logger{
    static int cnt;
    static Logger* loggerInstance;
    static mutex mtx;
    Logger(Logger const&);
    void operator=(Logger const&);
    Logger();
public:
    static Logger* getLogger();
    void log(string msg);
};

#endif