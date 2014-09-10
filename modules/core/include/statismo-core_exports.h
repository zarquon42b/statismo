#ifndef STATISMO_CORE_EXPORT_H
#define STATISMO_CORE_EXPORT_H

#ifdef STATISMO_CORE_STATIC_DEFINE
# define STATISMO_CORE_EXPORT
# define STATISMO_CORE_EXPIMP_TEMPLATE
# define STATISMO_CORE_NO_EXPORT
#else
# ifdef _WIN32
#  ifndef STATISMO_CORE_EXPORT
#   ifdef statismo_core_EXPORTS
     /* We are building this library */
#    define STATISMO_CORE_EXPORT __declspec(dllexport)
#    define STATISMO_CORE_EXPIMP_TEMPLATE
#   else
     /* We are using this library */
#    define STATISMO_CORE_EXPORT __declspec(dllimport)
#    define STATISMO_CORE_EXPIMP_TEMPLATE extern
#   endif
#  endif
# else
#  define STATISMO_CORE_EXPORT
#  define STATISMO_CORE_NO_EXPORT
# endif
# ifndef STATISMO_CORE_NO_EXPORT
#  define STATISMO_CORE_NO_EXPORT
# endif
#endif

#endif

