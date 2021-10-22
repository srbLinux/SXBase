#ifndef MAXRIX_H
#define MAXRIX_H

#include "Base.h"

#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::ostream;

namespace SXBase
{
    class Maxrix;
}

//不要尝试使用typedef，typedef和template有冲突，在类外不能如此定义，在类中定义了，在类外无法使用。
template<typename T>
using MaxrixArray = vector<vector<T>>;


template<typename T>
class Maxrix
{
    public:
        Maxrix();
        ~Maxrix();
        Maxrix(T** array);
        bool GetMaxrix();
        Maxrix(int row,int line);
        Maxrix(MaxrixArray<T> array) : Array(array){};
        friend ostream& operator<<(ostream& os,Maxrix<T>& arr1);
        friend MaxrixArray<T> operator+(MaxrixArray<T> arr0,MaxrixArray<T> arr1);
        friend MaxrixArray<T> operator*(MaxrixArray<T> arr0,MaxrixArray<T> arr1);
    private:
        MaxrixArray<T> Array;
    protected:
};

#endif