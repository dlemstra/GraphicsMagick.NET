/*
  Copyright (C) 2003 GraphicsMagick Group
  Copyright (C) 2002 ImageMagick Studio
  Copyright 1991-1999 E. I. du Pont de Nemours and Company
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  X11 User Interface Methods for ImageMagick.
*/
#ifndef _MAGICK_WIDGET_H
#define _MAGICK_WIDGET_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

/*
  Enum declarations.
*/
typedef enum
{
  ControlState = 0x0001,
  InactiveWidgetState = 0x0004,
  JumpListState = 0x0008,
  RedrawActionState = 0x0010,
  RedrawListState = 0x0020,
  RedrawWidgetState = 0x0040,
  UpdateListState = 0x0100
} WidgetState;

/*
  Typedef declarations.
*/
typedef struct _MagickXWidgetInfo
{
  char
    *cursor,
    *text,
    *marker;

  int
    id;

  unsigned int
    bevel_width,
    width,
    height;

  int
    x,
    y,
    min_y,
    max_y;

  unsigned int
    raised,
    active,
    center,
    trough,
    highlight;
} MagickXWidgetInfo;

/*
  X utilities routines.
*/
extern MagickExport int
  MagickXCommandWidget(Display *,MagickXWindows *,const char **,XEvent *),
  MagickXConfirmWidget(Display *,MagickXWindows *,const char *,const char *),
  MagickXDialogWidget(Display *,MagickXWindows *,const char *,const char *,char *),
  MagickXMenuWidget(Display *,MagickXWindows *,const char *,const char **,char *);

extern MagickExport unsigned int
  MagickXPreferencesWidget(Display *,MagickXResourceInfo *,MagickXWindows *);

extern MagickExport void
  MagickXColorBrowserWidget(Display *,MagickXWindows *,const char *,char *),
  MagickXFileBrowserWidget(Display *,MagickXWindows *,const char *,char *),
  MagickXFontBrowserWidget(Display *,MagickXWindows *,const char *,char *),
  MagickXInfoWidget(Display *,MagickXWindows *,const char *),
  MagickXListBrowserWidget(Display *,MagickXWindows *,MagickXWindowInfo *,const char **,
    const char *,const char *,char *),
  MagickXMonitorWidget(Display *display,MagickXWindows *windows,const char *task,
    const magick_int64_t quantum,const magick_uint64_t span),
  MagickXNoticeWidget(Display *,MagickXWindows *,const char *,const char *),
  MagickXTextViewWidget(Display *,const MagickXResourceInfo *,MagickXWindows *,const unsigned int,
    const char *,const char **);

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
