/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef TIGR_BAKE_CONFIG_H
#define TIGR_BAKE_CONFIG_H

/* Headers of public dependencies */
/* No dependencies */

/* Convenience macro for exporting symbols */
#ifndef tigr_STATIC
#if defined(tigr_EXPORTS) && (defined(_MSC_VER) || defined(__MINGW32__))
  #define TIGR_API __declspec(dllexport)
#elif defined(tigr_EXPORTS)
  #define TIGR_API __attribute__((__visibility__("default")))
#elif defined(_MSC_VER)
  #define TIGR_API __declspec(dllimport)
#else
  #define TIGR_API
#endif
#else
  #define TIGR_API
#endif

#endif

