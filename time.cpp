#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    time_t tmNow;
    tmNow = time(NULL);
    struct tm t = *localtime(&tmNow);
    cout<<"Current Time: "<<t.tm_hour<<":"<<t.tm_min<<":"<<t.tm_sec;
    cout<<endl;
    return 0;
}