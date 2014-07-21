/*
  Copyright (C) 2003 GraphicsMagick Group
  Copyright (C) 2002 ImageMagick Studio
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  X11 Utility Methods for ImageMagick.
*/
#ifndef _MAGICK_XWINDOW_H
#define _MAGICK_XWINDOW_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#if defined(HasX11)

#undef False
#undef True
#define XLIB_ILLEGAL_ACCESS  1
#include <X11/Xos.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xresource.h>
#include <X11/Xproto.h>
#include <X11/Xatom.h>
#include <X11/Xlocale.h>
#include <X11/cursorfont.h>
#include <X11/keysym.h>
#include <X11/XWDFile.h>

/*
  Remove X11 defines so enums are used
*/
#undef ForgetGravity
#undef NorthWestGravity
#undef NorthGravity
#undef NorthEastGravity
#undef WestGravity
#undef CenterGravity
#undef EastGravity
#undef SouthWestGravity
#undef SouthGravity
#undef SouthEastGravity
#undef StaticGravity

#include "magick/quantize.h"
#include "magick/PreRvIcccm.h"

#undef index
#if defined(hpux9)
# define XFD_SET  int
#else
# define XFD_SET  fd_set
#endif

/*
  Define declarations.
*/
#define MaxNumberPens  11
#define MaxNumberFonts  11
#define MaxIconSize  96
#define MaxXWindows  10

/*
  Enumeration declarations.
*/
typedef enum
{
#undef DoRed
  DoRed = 0x0001,
#undef DoGreen
  DoGreen = 0x0002,
#undef DoBlue
  DoBlue = 0x0004,
  DoMatte = 0x0008
} MagickXColorFlags;

typedef enum
{
  ForegroundStencil,
  BackgroundStencil,
  OpaqueStencil,
  TransparentStencil
} AnnotationStencil;

typedef enum
{
  UndefinedElement = 0,
  PointElement,
  LineElement,
  RectangleElement,
  FillRectangleElement,
  CircleElement,
  FillCircleElement,
  EllipseElement,
  FillEllipseElement,
  PolygonElement,
  FillPolygonElement,
  ColorElement,
  MatteElement,
  TextElement,
  ImageElement
} ElementType;

typedef enum
{
  UndefinedColormap,
  PrivateColormap,
  SharedColormap
} MagickXColormapType;

typedef enum
{
  DefaultState = 0x0000,
  EscapeState = 0x0001,
  ExitState = 0x0002,
  FormerImageState = 0x0004,
  ModifierState = 0x0008,
  MontageImageState = 0x0010,
  NextImageState = 0x0020,
  RetainColorsState = 0x0040,
  SuspendTime = 50,
  UpdateConfigurationState = 0x0080,
  UpdateRegionState = 0x0100
} MagickXState;

/*
  Typedef declarations.
*/
typedef struct _DiversityPacket
{
  Quantum
    red,
    green,
    blue;

  unsigned short
    index;

  unsigned long
    count;
} DiversityPacket;

typedef struct _MagickXAnnotateInfo
{
  struct _MagickXAnnotateInfo
    *previous,
    *next;

  int
    x,
    y;

  unsigned int
    width,
    height;

  double
    degrees;

  XFontStruct
    *font_info;

  char
    *text;

  AnnotationStencil
    stencil;

  char
    geometry[MaxTextExtent];
} MagickXAnnotateInfo;

typedef struct _MagickXDrawInfo
{
  int
    x,
    y;

  unsigned int
    width,
    height;

  double
    degrees;

  AnnotationStencil
    stencil;

  ElementType
    element;

  Pixmap
    stipple;

  unsigned int
    line_width;

  XSegment
    line_info;

  unsigned int
    number_coordinates;

  RectangleInfo
    rectangle_info;

  XPoint
    *coordinate_info;

  char
    geometry[MaxTextExtent];
} MagickXDrawInfo;

typedef struct _MagickXImportInfo
{
  unsigned int
    frame,
    borders,
    screen,
    descend,
    silent;
} MagickXImportInfo;

typedef struct _MagickXPixelInfo
{
  unsigned long
    colors,
    *pixels;

  XColor
    foreground_color,
    background_color,
    border_color,
    matte_color,
    highlight_color,
    shadow_color,
    depth_color,
    trough_color,
    box_color,
    pen_color,
    pen_colors[MaxNumberPens];

  GC
    annotate_context,
    highlight_context,
    widget_context;

  unsigned short
    box_index,
    pen_index;
} MagickXPixelInfo;

typedef struct _MagickXResourceInfo
{
  XrmDatabase
    resource_database;

  ImageInfo
    *image_info;

  QuantizeInfo
    *quantize_info;

  unsigned long
    colors;

  unsigned int
    close_server,
    backdrop;

  char
    *background_color,
    *border_color;

  char
    *client_name;

  MagickXColormapType
    colormap;

  unsigned int
    border_width,
    color_recovery,
    confirm_exit,
    delay;

  char
    *display_gamma;

  char
    *font,
    *font_name[MaxNumberFonts],
    *foreground_color;

  unsigned int
    display_warnings,
    gamma_correct;

  char
    *icon_geometry;

  unsigned int
    iconic,
    immutable;

  char
    *image_geometry;

  char
    *map_type,
    *matte_color,
    *name;

  unsigned int
    magnify,
    pause;

  char
    *pen_colors[MaxNumberPens];

  char
    *text_font,
    *title;

  int
    quantum;

  unsigned int
    update,
    use_pixmap,
    use_shared_memory;

  unsigned long
    undo_cache;

  char
    *visual_type,
    *window_group,
    *window_id,
    *write_filename;

  Image
    *copy_image;

  int
    gravity;

  char
    home_directory[MaxTextExtent];
} MagickXResourceInfo;

typedef struct _MagickXWindowInfo
{
  Window
    id;

  Window
    root;

  Visual
    *visual;

  int
    storage_class,
    depth;

  XVisualInfo
    *visual_info;

  XStandardColormap
    *map_info;

  MagickXPixelInfo
    *pixel_info;

  XFontStruct
    *font_info;

  GC
    annotate_context,
    highlight_context,
    widget_context;

  Cursor
    cursor,
    busy_cursor;

  char
    *name,
    *geometry,
    *icon_name,
    *icon_geometry,
    *crop_geometry;

  unsigned long
    data,
    flags;

  int
    x,
    y;

  unsigned int
    width,
    height,
    min_width,
    min_height,
    width_inc,
    height_inc,
    border_width,
    use_pixmap,
    immutable,
    shape,
    shared_memory;

  int
    screen;

  XImage
    *ximage,
    *matte_image;

  Pixmap
    highlight_stipple,
    shadow_stipple,
    pixmap,
    *pixmaps,
    matte_pixmap,
    *matte_pixmaps;

  XSetWindowAttributes
    attributes;

  XWindowChanges
    window_changes;

  void
    *segment_info;

  int
    mask;

  unsigned int
    orphan,
    mapped,
    stasis;

  Image
    *image;

  unsigned int
    destroy;    /* If True, then destroy image */
} MagickXWindowInfo;

typedef struct _MagickXWindows
{
  Display
    *display;

  XStandardColormap
    *map_info,
    *icon_map;

  XVisualInfo
    *visual_info,
    *icon_visual;

  MagickXPixelInfo
    *pixel_info,
    *icon_pixel;

  XFontStruct
    *font_info;

  MagickXResourceInfo
    *icon_resources;

  XClassHint
    *class_hints;

  XWMHints
    *manager_hints;

  MagickXWindowInfo
    context,
    group_leader,
    backdrop,
    icon,
    image,
    info,
    magnify,
    pan,
    command,
    widget,
    popup;

  Atom
    wm_protocols,
    wm_delete_window,
    wm_take_focus,
    im_protocols,
    im_remote_command,
    im_update_widget,
    im_update_colormap,
    im_former_image,
    im_retain_colors,
    im_next_image,
    im_exit,
    dnd_protocols;
} MagickXWindows;

/*
  X utilities methods.
*/
extern MagickExport char
  *MagickXGetResourceClass(XrmDatabase,const char *,const char *,char *),
  *MagickXGetResourceInstance(XrmDatabase,const char *,const char *,const char *),
  *MagickXGetScreenDensity(Display *);

extern MagickExport Cursor
  MagickXMakeCursor(Display *,Window,Colormap,char *,char *);

extern MagickExport Image
  *MagickXAnimateImages(Display *,MagickXResourceInfo *,char *[],const int,Image *),
  *MagickXDisplayImage(Display *,MagickXResourceInfo *,char *[],int,Image **,
    unsigned long *),
  *MagickXImportImage(const ImageInfo *,MagickXImportInfo *);

extern MagickExport int
  MagickXError(Display *,XErrorEvent *);

extern MagickExport unsigned int
  MagickIsTrue(const char *),
  MagickXAnnotateImage(Display *,const MagickXPixelInfo *,MagickXAnnotateInfo *,Image *),
  MagickXDisplayBackgroundImage(Display *,MagickXResourceInfo *,Image *),
  MagickXDrawImage(Display *,const MagickXPixelInfo *,MagickXDrawInfo *,Image *),
  MagickXGetWindowColor(Display *,MagickXWindows *,char *),
  MagickXMakeImage(Display *,const MagickXResourceInfo *,MagickXWindowInfo *,Image *,
    unsigned int,unsigned int),
  MagickXMagickMonitor(const char *task,const magick_int64_t quantum,
    const magick_uint64_t span,ExceptionInfo *exception),
  MagickXQueryColorDatabase(const char *,XColor *),
  MagickXRemoteCommand(Display *,const char *,const char *);

extern MagickExport void
  MagickXAnimateBackgroundImage(Display *,MagickXResourceInfo *,Image *),
  MagickXBestIconSize(Display *,MagickXWindowInfo *,Image *),
  MagickXBestPixel(Display *,const Colormap,XColor *,unsigned int,XColor *),
  MagickXCheckRefreshWindows(Display *,MagickXWindows *),
  MagickXClientMessage(Display *,const Window,const Atom,const Atom,const Time),
  MagickXConfigureImageColormap(Display *,MagickXResourceInfo *,MagickXWindows *,Image *),
  MagickXConstrainWindowPosition(Display *,MagickXWindowInfo *),
  MagickXDelay(Display *,const unsigned long),
  MagickXDestroyResourceInfo(MagickXResourceInfo *resource_info),
  MagickXDestroyX11Resources(void),
  MagickXDestroyXWindows(MagickXWindows *windows),
  MagickXDestroyXWindowInfo(Display *display,MagickXWindowInfo *window),
  MagickXDestroyWindowColors(Display *,Window),
  MagickXDisplayImageInfo(Display *,const MagickXResourceInfo *,MagickXWindows *,Image *,Image *),
  MagickXFreeResources(Display *,XVisualInfo *,XStandardColormap *,MagickXPixelInfo *,
    XFontStruct *,MagickXResourceInfo *,MagickXWindowInfo *),
  MagickXFreeStandardColormap(Display *,const XVisualInfo *,XStandardColormap *,
    MagickXPixelInfo *),
  MagickXGetAnnotateInfo(MagickXAnnotateInfo *),
  MagickXGetImportInfo(MagickXImportInfo *),
  MagickXGetMapInfo(const XVisualInfo *,const Colormap,XStandardColormap *),
  MagickXGetPixelPacket(Display *,const XVisualInfo *,const XStandardColormap *,
    const MagickXResourceInfo *,Image *,MagickXPixelInfo *),
  MagickXGetResourceInfo(XrmDatabase,const char *,MagickXResourceInfo *),
  MagickXGetWindowInfo(Display *,XVisualInfo *,XStandardColormap *,MagickXPixelInfo *,
    XFontStruct *,MagickXResourceInfo *,MagickXWindowInfo *),
  MagickXHighlightEllipse(Display *,Window,GC,const RectangleInfo *),
  MagickXHighlightLine(Display *,Window,GC,const XSegment *),
  MagickXHighlightRectangle(Display *,Window,GC,const RectangleInfo *),
  MagickXMakeMagnifyImage(Display *,MagickXWindows *),
  MagickXMakeStandardColormap(Display *,XVisualInfo *,MagickXResourceInfo *,Image *,
    XStandardColormap *,MagickXPixelInfo *),
  MagickXMakeWindow(Display *,Window,char **,int,XClassHint *,XWMHints *,
    MagickXWindowInfo *),
  MagickXQueryPosition(Display *,const Window,int *,int *),
  MagickXRefreshWindow(Display *,const MagickXWindowInfo *,const XEvent *),
  MagickXRetainWindowColors(Display *,const Window),
  MagickXSignalHandler(int) MAGICK_FUNC_NORETURN,
  MagickXSetCursorState(Display *,MagickXWindows *,const unsigned int),
  MagickXUserPreferences(MagickXResourceInfo *),
  MagickXWarning(const ExceptionType,const char *,const char *);

extern MagickExport Window
  MagickXWindowByID(Display *,const Window,const unsigned long),
  MagickXWindowByName(Display *,const Window,const char *),
  MagickXWindowByProperty(Display *,const Window,const Atom);

extern MagickExport XFontStruct
  *MagickXBestFont(Display *,const MagickXResourceInfo *,const unsigned int);

extern MagickExport XrmDatabase
  MagickXGetResourceDatabase(Display *,const char *);

extern MagickExport XVisualInfo
  *MagickXBestVisualInfo(Display *,XStandardColormap *,MagickXResourceInfo *);

extern MagickExport MagickXWindows
  *MagickXInitializeWindows(Display *,MagickXResourceInfo *),
  *MagickXSetWindows(MagickXWindows *);

/*
  Invoke pre-X11R6 ICCCM routines if XlibSpecificationRelease is not 6.
*/
#if XlibSpecificationRelease < 6
#if !defined(PRE_R6_ICCCM)
#define PRE_R6_ICCCM
#endif
#endif
/*
  Invoke pre-X11R5 ICCCM routines if XlibSpecificationRelease is not defined.
*/
#if !defined(XlibSpecificationRelease)
#define PRE_R5_ICCCM
#endif
/*
  Invoke pre-X11R4 ICCCM routines if PWinGravity is not defined.
*/
#if !defined(PWinGravity)
#define PRE_R4_ICCCM
#endif
#include "magick/widget.h"

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
