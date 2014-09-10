#ifndef STATISMO_VTK_EXPORT_H
#define STATISMO_VTK_EXPORT_H

#ifdef STATISMO_VTK_STATIC_DEFINE
#  define STATISMO_VTK_EXPORT
#  define STATISMO_VTK_NO_EXPORT
#else
# ifdef _WIN32
#  ifndef STATISMO_VTK_EXPORT
#    ifdef statismo_VTK_EXPORTS
        /* We are building this library */
#      define STATISMO_VTK_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define STATISMO_VTK_EXPORT __declspec(dllimport)
#    endif
#  endif
# else
# define STATISMO_VTK_EXPORT
# define STATISMO_VTK_NO_EXPORT
# endif

#  ifndef STATISMO_VTK_NO_EXPORT
#    define STATISMO_VTK_NO_EXPORT 
#  endif
#endif

#endif

