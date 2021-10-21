#ifndef STRING_H
#define STRING_H
#include <cstdio>
#include <cstring>
#include <iostream>
using std::ostream;
using std::istream;

namespace SXBase
{
    class String;
}

class String
{
    public:
        String();
        String(String& str);
        String(const char* str);
        ~String();
        int size();
        bool cutstr(char c);
        const char* tostr();
        void operator+(String& str);
        String& operator+=(String& str);
        String& operator[](String& str);
        friend void operator+(String& str0,String& str1);
        friend ostream& operator<<(ostream& os,const String str){
            os<<str.STR;
            return os;
        };
        friend istream& operator>>(istream& is,const String str){
            is>>str.STR;
            return is;
        };
    private:
        int StrSize;
        char* STR;
    protected:
};
#endif

