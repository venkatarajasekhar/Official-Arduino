#include <stdio.h>
#include <SingletonLogger.h>

using namespace std;

bool Singleton::instanceFlag = FALSE;
Singleton* Singleton::single = NULL;
void Singleton::method()
{
    #define LOG_MESSAGE(prio, stream, msg, ...) do {\
                        char *str;\
                        if (prio == INFO)\
                            str = "INFO";\
                        else if (prio == ERR)\
                            str = "ERR";\
                        fprintf(stream, "[%s] : %s : %d : "msg" \n", \
                                str, __FILE__, __LINE__, ##__VA_ARGS__);\
                    } while (0)

Singleton* Singleton::getInstance()
{
    if(! instanceFlag)
    {
        single = new Singleton();
        instanceFlag = TRUE;
        return single;
    }
    else
    {
        return single;
    }
}
