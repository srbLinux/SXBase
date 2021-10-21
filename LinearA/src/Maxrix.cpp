#include "../include/Maxrix.h"
/**
 * 
 *  CopyRight (C) 2021.10.20
 *  矩阵相加：
 *  
 *  矩阵相乘：
 * 
 * 
*/
template<typename T>
Maxrix<T>::Maxrix()
{

}

template<typename T>
Maxrix<T>::~Maxrix()
{

}

template<typename T>
Maxrix<T>::Maxrix(T** array)
{

}

template<typename T>
Maxrix<T>::Maxrix(int line,int row)
{
}

template<typename T>
bool Maxrix<T>::GetMaxrix()
{
    T t1;
    cin>>t1;
}

template<typename T>
MaxrixArray<T> operator+(MaxrixArray<T> arr0,MaxrixArray<T> arr1)
{
    try{
        if((arr1.size() != arr0.size()) || (arr0[0].size() != arr1[0].size()))
            throw -1;
    }catch(int e){
        printf("矩阵不符合条件，不能相加！");
    }
    MaxrixArray<T> Sum;
    for(int i = 0;i < arr0.size();i++)
    {
        for(int j = 0;j < arr0[0].size();j++)
        Sum[i][j] = arr0[i][j] + arr1[i][j];
    }
    return Sum;
}

/**
 * |2 0 3|    |7 6 9 4|
 * |4 6 7|    |9 3 1 0|
 * |5 9 9|    |8 0 3 7|3*4 3 = arr.size();
 * |9 0 4|4*3
*/
template<typename T>
MaxrixArray<T> operator*(MaxrixArray<T> arr0,MaxrixArray<T> arr1)
{
    try{
        if((arr0.size() != arr1[0].size()) || (arr0[0].size() != arr1.size()))
            throw -1;
    }catch(int e){
        printf("");
    }
    MaxrixArray<T> SumArray(arr0.size(),arr1.size());

}

/**
 * 
 * stop 2021.10.20
 * 
*/
