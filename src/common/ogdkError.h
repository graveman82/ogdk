#ifndef OGDK_ERROR_H_INCL
#define OGDK_ERROR_H_INCL

#include "common/ogdkInt.h"

using OgdkRetVal = OgdkUInt32;

class OgdkError
{
public:
	enum Statuses : OgdkUInt8
	{
		kOk,
		kWarn,
		kError,
		kFatal,
		kCancel
	};

	enum Codes : OgdkUInt16
	{
		kNone,
		kInvalidArg,
	};

	OgdkError(OgdkUInt8 status, OgdkUInt16 code)
		: m_status{ status }
		, m_code{ code }
	{}

	static OgdkRetVal ok()
	{
		return OgdkError(kOk, kNone);
	}

	operator OgdkRetVal() const
	{
		OgdkRetVal retVal{};
		retVal |= 0x000000FF & m_status;
		retVal |= 0x00FFFF00 & m_code;
		return retVal;
	}

	static OgdkError from(OgdkRetVal val)
	{
		return OgdkError(OgdkUInt8(val & 0x000000FF), OgdkUInt16((val >> 8) & 0x0000FFFF));
	}
	OgdkUInt8 status() const { return m_status; }
	OgdkUInt16 code() const { return m_code; }
private:
	OgdkUInt8 m_status;
	OgdkUInt16 m_code;
};
#endif // OGDK_ERROR_H_INCL
