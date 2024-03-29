#ifndef VERSION_H
#define VERSION_H

#define SCANTOOL_VERSION          1
#define SCANTOOL_SUB_VERSION      13
#define SCANTOOL_WIP_VERSION      0

#ifdef EEEPC_BUILD0
    #define SCANTOOL_VERSION_STR      "1.13 For EEE-PC Build 1"
    #define SCANTOOL_VERSION_EX_STR   "1.13 For EEE-PC Build 1"
    #define SCANTOOL_YEAR_STR         "2008"
    #define SCANTOOL_DATE             20080229    /* yyyymmdd */
#else
    #define SCANTOOL_VERSION_STR      "1.13"
    #define SCANTOOL_VERSION_EX_STR   "1.13"
    #define SCANTOOL_YEAR_STR         "2006"
    #define SCANTOOL_DATE             20060523    /* yyyymmdd */
#endif

#ifdef ALLEGRO_WINDOWS
   #define SCANTOOL_PLATFORM_STR   "Windows"
#else
   #define SCANTOOL_PLATFORM_STR   "DOS"
#endif

#define SCANTOOL_COPYRIGHT_STR     "Copyright � " SCANTOOL_YEAR_STR " ScanTool.net, LLC"

#endif
