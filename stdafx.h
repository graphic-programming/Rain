// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#define _USE_MATH_DEFINES               // for M_PI

#define WM_ADD_RAINDROP      WM_USER + 5
#define WM_ANIMATE_RAINDROP  WM_USER + 6

// Windows Header Files:
#include <windows.h>
#include <time.h>  

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <math.h>

#include <gl/gl.h>               // Standard opengl include.
#include <gl/glu.h>              // Opengl utilities.
