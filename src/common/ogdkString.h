#ifndef OGDK_STRING_H_INCL
#define OGDK_STRING_H_INCL

#include "common/ogdkDynamicArray.h"

#include <string>

template<
    typename TChar,
    typename TTraits = std::char_traits<TChar>,
    typename TAllocator = std::allocator<TChar>
> 
class OgdkBasicString
{
public:
private:
    OgdkDynamicArray<TChar, TAllocator> m_charCont;
};
#endif // OGDK_STRING_H_INCL
