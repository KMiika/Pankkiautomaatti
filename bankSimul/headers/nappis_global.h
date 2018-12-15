#ifndef NAPPIS_GLOBAL_H
#define NAPPIS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(NAPPIS_LIBRARY)
#  define NAPPISSHARED_EXPORT Q_DECL_EXPORT
#else
#  define NAPPISSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // NAPPIS_GLOBAL_H
