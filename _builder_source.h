#define static
#define inline
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#define MGBA_EXPORT
#include <mgba/flags.h>
#define OPAQUE_THREADING
#include <mgba/core/blip_buf.h>
#include <mgba/core/cache-set.h>
#include <mgba-util/common.h>
#include <mgba/core/core.h>
#include <mgba/core/map-cache.h>
#include <mgba/core/log.h>
#include <mgba/core/mem-search.h>
#include <mgba/core/thread.h>
#include <mgba/core/version.h>
#include <mgba/debugger/debugger.h>
#include <mgba/gba/interface.h>
#include <mgba/internal/arm/arm.h>
#include <mgba/internal/debugger/cli-debugger.h>
#include <mgba/internal/gba/gba.h>
#include <mgba/internal/gba/input.h>
#include <mgba/internal/gba/renderers/cache-set.h>
#include <mgba/internal/sm83/sm83.h>
#include <mgba/internal/gb/gb.h>
#include <mgba/internal/gb/renderers/cache-set.h>
#include <mgba-util/png-io.h>
#include <mgba-util/vfs.h>

#define PYEXPORT
#include "core.h"
#include "log.h"
#include "sio.h"
#include "vfs-py.h"
#undef PYEXPORT
