#include "../include/String.h"
String::String()
{
    STR = new char(50);
    this->StrSize = 0;
}

String::String(String& str)
{
    STR = new char(str.size());
    for(int i = 0;i < str.size();i++)
        STR[i] = str.tostr()[i];
}

String::String(const char* str)
{
    int num = strlen(str);
    STR = new char(num);
    for(int i = 0;i < num;i++)
        STR[i] = str[i];
    this->StrSize = num;
}

int String::size()
{
    return this->StrSize;
}

const char* String::tostr()
{
    return this->STR;
}

String& String::operator+=(String& str)
{
    strcat(this->STR,str.tostr());
    this->StrSize += str.size();
    return *this;
}

String::~String()
{
    delete STR;
}
