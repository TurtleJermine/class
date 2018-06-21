#include"helloclass.h"


using namespace std;


HelloClass ::HelloClass()
{
    cout<<"I am being built."<<endl;
}


HelloClass::~HelloClass()
{
    cout<<"I am being destroyed."<<endl;
}

void HelloClass::sayhello()
{
    cout<<"Hello class!"<<endl;
}
