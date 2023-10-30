
#include<bits/stdc++.h>
using namespace std;
class Address
{
    public;
    int hno;
    char colony[20];
    string city;
    public:
    Address(int x, char *p, char *q)
    {
        hno = x;
        strcpy(colony,p);
        getline(cin,city);
    }
    friend class Person;
};
class Person
{
    char name[20];
    Address *p;
    public:
    void setAddress(Address *ptr)
    {
        p = ptr;
    }
    void print( Address *p)
    {
        cout<<name<<"lives at"<<p->hno<<","<<p->colony<<","<<p->city;
    }
    Person()
    {
        cout<<"enter name:";
        getline(cin,name);
    }
};
int main()
{
    Address a1(19,"vasant vihar","Delhi");
    Person p1,p2;
    p1.setAddress(&a1);
    p2.setAddress(&a1);
}
