//
// Copyright 2017 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
// WARNING: THIS FILE IS GENERATED.  DO NOT EDIT.
//

#define TF_MAX_ARITY 7
#include "pxr/pxr.h"
#include "pxr/base/arch/defines.h"
#if defined(ARCH_OS_DARWIN)
#include <glob.h>
#include <limits.h>
#include <sys/mount.h>
#include <sys/param.h>
#include <unistd.h>
#include <mach/mach_time.h>
#endif
#if defined(ARCH_OS_LINUX)
#include <glob.h>
#include <limits.h>
#include <sys/param.h>
#include <sys/statfs.h>
#include <unistd.h>
#include <x86intrin.h>
#endif
#if defined(ARCH_OS_WINDOWS)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <Windows.h>
#include <intrin.h>
#include <io.h>
#include <stringapiset.h>
#endif
#include <algorithm>
#include <any>
#include <atomic>
#include <bitset>
#include <cfloat>
#include <cinttypes>
#include <cmath>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fcntl.h>
#include <float.h>
#include <functional>
#include <initializer_list>
#include <iosfwd>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <math.h>
#include <memory>
#include <mutex>
#include <new>
#include <numeric>
#include <optional>
#include <ostream>
#include <set>
#include <sstream>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <variant>
#include <vector>
#include <Alembic/Abc/ArchiveInfo.h>
#include <Alembic/Abc/IArchive.h>
#include <Alembic/Abc/IArrayProperty.h>
#include <Alembic/Abc/IObject.h>
#include <Alembic/Abc/IScalarProperty.h>
#include <Alembic/Abc/ITypedArrayProperty.h>
#include <Alembic/Abc/ITypedScalarProperty.h>
#include <Alembic/Abc/OArchive.h>
#include <Alembic/Abc/OObject.h>
#include <Alembic/AbcCoreAbstract/Foundation.h>
#include <Alembic/AbcCoreFactory/IFactory.h>
#include <Alembic/AbcCoreOgawa/All.h>
#include <Alembic/AbcGeom/GeometryScope.h>
#include <Alembic/AbcGeom/ICamera.h>
#include <Alembic/AbcGeom/ICurves.h>
#include <Alembic/AbcGeom/IPoints.h>
#include <Alembic/AbcGeom/IPolyMesh.h>
#include <Alembic/AbcGeom/ISubD.h>
#include <Alembic/AbcGeom/IXform.h>
#include <Alembic/AbcGeom/OCamera.h>
#include <Alembic/AbcGeom/OCurves.h>
#include <Alembic/AbcGeom/OPoints.h>
#include <Alembic/AbcGeom/OPolyMesh.h>
#include <Alembic/AbcGeom/OSubD.h>
#include <Alembic/AbcGeom/OXform.h>
#include <Alembic/AbcGeom/SchemaInfoDeclarations.h>
#include <Alembic/AbcGeom/Visibility.h>
#ifdef PXR_PYTHON_SUPPORT_ENABLED
#include <boost/python/def.hpp>
#include <boost/python/dict.hpp>
#include <boost/python/extract.hpp>
#include <boost/python/handle.hpp>
#include <boost/python/module.hpp>
#include <boost/python/object.hpp>
#include <boost/python/object_fwd.hpp>
#include <boost/python/object_operators.hpp>
#include <boost/python/type_id.hpp>
#if defined(__APPLE__) // Fix breakage caused by Python's pyport.h.
#undef tolower
#undef toupper
#endif
#endif // PXR_PYTHON_SUPPORT_ENABLED
#include <tbb/blocked_range.h>
#include <tbb/cache_aligned_allocator.h>
#include <tbb/concurrent_hash_map.h>
#include <tbb/concurrent_queue.h>
#include <tbb/concurrent_unordered_set.h>
#include <tbb/concurrent_vector.h>
#include <tbb/enumerable_thread_specific.h>
#include <tbb/spin_mutex.h>
#include <tbb/spin_rw_mutex.h>
#include <tbb/task.h>
#include <tbb/task_group.h>
#ifdef PXR_PYTHON_SUPPORT_ENABLED
#include "pxr/base/tf/pySafePython.h"
#endif // PXR_PYTHON_SUPPORT_ENABLED
