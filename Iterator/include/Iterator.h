#include <iostream>
using std::cin;
using std::cout;
namespace SXBase
{
    class Iterator;
}

template<typename T>
class Iterator
{
    public:
        Iterator();
        T* end();
        T* begin();
    private:
        T* itor;
    protected:
};