/* MinGW libshell32.a lacks IID_IExtractImage. */

#define INITGUID
#include <shobjidl.h>

DEFINE_GUID(IID_IExtractImage, 0xBB2E617C, 0x0920, 0x11d1, 0x9A, 0x0B, 0x00, 0xC0, 0x4F, 0xC2, 0xD6, 0xC1);