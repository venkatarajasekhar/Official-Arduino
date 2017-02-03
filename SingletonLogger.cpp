using namespace std;

bool Singleton::instanceFlag = false;
Singleton* Singleton::single = NULL;
void Singleton::method()
{
    cout << "Method of the singleton class" << endl;
}

Singleton* Singleton::getInstance()
{
    if(! instanceFlag)
    {
        single = new Singleton();
        instanceFlag = true;
        return single;
    }
    else
    {
        return single;
    }
}
