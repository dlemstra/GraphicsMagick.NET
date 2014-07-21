/*
  Copyright (C) 2003 GraphicsMagick Group
  Copyright (C) 2002 ImageMagick Studio
  Copyright 1991-1999 E. I. du Pont de Nemours and Company
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  GraphicsMagick X11 compatibility methods.
*/
#ifndef _MAGICK_PRER5ICCCM_H
#define _MAGICK_PRER5ICCCM_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#if defined(PRE_R6_ICCCM)
/*
  Compatability defines for pre X11R6 ICCCM.
*/
#define XK_KP_Home              0xFF95
#define XK_KP_Left              0xFF96
#define XK_KP_Up                0xFF97
#define XK_KP_Right             0xFF98
#define XK_KP_Down              0xFF99
#define XK_KP_Prior             0xFF9A
#define XK_KP_Page_Up           0xFF9A
#define XK_KP_Next              0xFF9B
#define XK_KP_Page_Down         0xFF9B
#define XK_KP_End               0xFF9C
#define XK_KP_Delete            0xFF9F

extern MagickExport Status
  XInitImage(XImage *ximage);
#endif

#if defined(PRE_R5_ICCCM)
/*
  Compatability defines for pre X11R5 ICCCM.
*/
extern MagickExport XrmDatabase
  XrmGetDatabase();
#endif

#if defined(PRE_R4_ICCCM)
/*
  Compatability defines for pre X11R4 ICCCM.
*/

#define WithdrawnState  0
#define XInductColormap(display,colormap)  XInstallColormap(display,colormap)
#define XUninductColormap(display,colormap)  XUninstallColormap(display,colormap)

typedef struct _XTextProperty
{
  unsigned char
    *value;

  Atom
    encoding;

  int
    format;

  unsigned long
    nitems;
} XTextProperty;

/*
  Pre R4 ICCCM compatibility routines.
*/
char
  *XResourceManagerString();

extern MagickExport int
  XWMGeometry();

extern MagickExport Status
  XGetRGBColormaps(),
  XGetWMName(),
  XReconfigureWMWindow(),
  XSetWMProtocols(),
  XWithdrawWindow();

extern MagickExport XClassHint
  *XAllocClassHint();

extern MagickExport XIconSize
  *XAllocIconSize();

extern MagickExport XSizeHints
  *XAllocSizeHints();

extern MagickExport XStandardColormap
  *XAllocStandardColormap();

extern MagickExport XWMHints
  *XAllocWMHints();

extern MagickExport VisualID
  XVisualIDFromVisual();

extern MagickExport void
  XrmDestroyDatabase(),
  XSetWMIconName(),
  XSetWMName(),
  XSetWMProperties();
#else
#define XInductColormap(display,colormap)
#define XUninductColormap(display,colormap)
#endif

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
