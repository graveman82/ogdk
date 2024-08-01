#ifndef OGDK_ENGINE_H_INCL
#define OGDK_ENGINE_H_INCL

#include "common/ogdkInt.h"
#include "common/ogdkError.h"

class OgdkEngine
{
public:
	OgdkRetVal initialize();
	OgdkRetVal uninitialize();
	OgdkRetVal mainLoop();
};
#endif // OGDK_ENGINE_H_INCL