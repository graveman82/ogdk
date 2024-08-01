#ifndef OGDK_DYNAMICARRAY_H_INCL
#define OGDK_DYNAMICARRAY_H_INCL

#include <vector>

template <typename T, typename TAllocator = std::allocator<T>>
class OgdkDynamicArray : public std::vector<T, TAllocator>
{
public:

};
#endif // OGDK_DYNAMICARRAY_H_INCL
