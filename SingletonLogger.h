class Singleton
{
private:
    static bool instanceFlag;
    static Singleton *single;
    Singleton()
    {
        //private constructor
    }
public:
    static Singleton* getInstance();
    void method();
    ~Singleton()
    {
        instanceFlag = false;
    }
};
