//  ---------------------------------------------------------------------------
//
//  @file       TwPrecomp.h
//  @brief      Precompiled header
//  @author     Philippe Decaudin
//  @license    This file is part of the AntTweakBar library.
//              For conditions of distribution and use, see License.txt
//
//  note:       Private header
//
//  ---------------------------------------------------------------------------

#if !defined ANT_TW_PRECOMP_INCLUDED
#define ANT_TW_PRECOMP_INCLUDED


#if defined _MSC_VER
#   pragma warning(disable: 4514)   // unreferenced inline function has been removed
#   pragma warning(disable: 4710)   // function not inlined
#   pragma warning(disable: 4786)   // template name truncated
#   pragma warning(disable: 4530)   // exceptions not handled
#   define _CRT_SECURE_NO_DEPRECATE // visual 8 secure crt warning
#endif

#include <cstdio>
#include <cassert>
#include <cmath>
#include <cfloat>
#include <cstring>
#include <cstdlib>
#include <memory.h>

#if defined(_MSC_VER) && _MSC_VER<=1200
#   pragma warning(push, 3)
#endif
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <list>
#include <set>
#if defined(_MSC_VER) && _MSC_VER<=1200
#   pragma warning(pop)
#endif

#if defined(_UNIX)
#   define ANT_UNIX
#   include <X11/cursorfont.h>
#   define GLX_GLXEXT_LEGACY
#   include <GL/glx.h>
#   include <X11/Xatom.h>
#   include <unistd.h>
#   include <malloc.h>
#   undef _WIN32
#   undef WIN32
#   undef _WIN64
#   undef WIN64
#   undef _WINDOWS
#   undef ANT_WIN32
#   undef ANT_UNIVERSAL_WINDOWS
#   undef ANT_OSX
#   undef ANT_ANDROID
#elif defined(_MACOSX)
#   define ANT_OSX
#   include <unistd.h>
#   include <Foundation/Foundation.h>
#   include <AppKit/NSImage.h>
#   include <AppKit/NSCursor.h>
#   undef _WIN32
#   undef WIN32
#   undef _WIN64
#   undef WIN64
#   undef _WINDOWS
#   undef ANT_WIN32
#   undef ANT_UNIVERSAL_WINDOWS
#   undef ANT_UNIX
#   undef ANT_ANDROID
#elif defined(ANDROID)
#   define ANT_ANDROID
#   include <unistd.h>
#   include <malloc.h>
#   undef _WIN32
#   undef WIN32
#   undef _WIN64
#   undef WIN64
#   undef _WINDOWS
#   undef ANT_WIN32
#   undef ANT_UNIVERSAL_WINDOWS
#   undef ANT_UNIX
#   undef ANT_OSX
#elif defined(PLATFORM_UNIVERSAL_WINDOWS)
#   define ANT_UNIVERSAL_WINDOWS
#   include <windows.h>
#elif defined(_WINDOWS) || defined(WIN32) || defined(WIN64) || defined(_WIN32) || defined(_WIN64)
#   define ANT_WIN32
#   ifndef WIN32_LEAN_AND_MEAN
#       define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers
#   endif
#   include <windows.h>
#   include <shellapi.h>
#endif

#include "TwPlatformStubs.h"

#endif  // !defined ANT_TW_PRECOMP_INCLUDED
