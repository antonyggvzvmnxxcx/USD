//
// Copyright 2023 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
////////////////////////////////////////////////////////////////////////

/* ************************************************************************** */
/* **                                                                      ** */
/* ** This file is generated by a script.                                  ** */
/* **                                                                      ** */
/* ** Do not edit it directly (unless it is within a CUSTOM CODE section)! ** */
/* ** Edit hdSchemaDefs.py instead to make changes.                        ** */
/* **                                                                      ** */
/* ************************************************************************** */

#include "pxr/imaging/hdar/systemSchema.h"

#include "pxr/imaging/hd/retainedDataSource.h"
#include "pxr/imaging/hd/systemSchema.h"

#include "pxr/base/trace/trace.h"

// --(BEGIN CUSTOM CODE: Includes)--
// --(END CUSTOM CODE: Includes)--

PXR_NAMESPACE_OPEN_SCOPE

TF_DEFINE_PUBLIC_TOKENS(HdarSystemSchemaTokens,
    HDAR_SYSTEM_SCHEMA_TOKENS);

// --(BEGIN CUSTOM CODE: Schema Methods)--

// static
HdContainerDataSourceHandle
HdarSystemSchema::GetFromPath(
    HdSceneIndexBaseRefPtr const& inputScene,
    SdfPath const& fromPath,
    SdfPath* outFoundAtPath)
{
    SdfPath foundAtPath;
    HdDataSourceBaseHandle ds = HdSystemSchema::GetFromPath(
            inputScene, fromPath,
            HdarSystemSchemaTokens->assetResolution,
            &foundAtPath);
    if (!ds) {
        return nullptr;
    }

    auto containerDs = HdContainerDataSource::Cast(ds);
    if (!containerDs) {
        TF_CODING_ERROR(
            "system.assetResolution at %s is not a container.",
            foundAtPath.GetText());
        return nullptr;
    }

    if (outFoundAtPath) {
        *outFoundAtPath = foundAtPath;
    }
    return containerDs;
}

// --(END CUSTOM CODE: Schema Methods)--

HdResolverContextDataSourceHandle
HdarSystemSchema::GetResolverContext() const
{
    return _GetTypedDataSource<HdResolverContextDataSource>(
        HdarSystemSchemaTokens->resolverContext);
}

/*static*/
HdContainerDataSourceHandle
HdarSystemSchema::BuildRetained(
        const HdResolverContextDataSourceHandle &resolverContext
)
{
    TfToken _names[1];
    HdDataSourceBaseHandle _values[1];

    size_t _count = 0;

    if (resolverContext) {
        _names[_count] = HdarSystemSchemaTokens->resolverContext;
        _values[_count++] = resolverContext;
    }
    return HdRetainedContainerDataSource::New(_count, _names, _values);
}

HdarSystemSchema::Builder &
HdarSystemSchema::Builder::SetResolverContext(
    const HdResolverContextDataSourceHandle &resolverContext)
{
    _resolverContext = resolverContext;
    return *this;
}

HdContainerDataSourceHandle
HdarSystemSchema::Builder::Build()
{
    return HdarSystemSchema::BuildRetained(
        _resolverContext
    );
}

/*static*/
HdarSystemSchema
HdarSystemSchema::GetFromParent(
        const HdContainerDataSourceHandle &fromParentContainer)
{
    return HdarSystemSchema(
        fromParentContainer
        ? HdContainerDataSource::Cast(fromParentContainer->Get(
                HdarSystemSchemaTokens->assetResolution))
        : nullptr);
}

/*static*/
const TfToken &
HdarSystemSchema::GetSchemaToken()
{
    return HdarSystemSchemaTokens->assetResolution;
}

/*static*/
const HdDataSourceLocator &
HdarSystemSchema::GetDefaultLocator()
{
    static const HdDataSourceLocator locator =
        HdSystemSchema::GetDefaultLocator().Append(GetSchemaToken());
    return locator;
} 

PXR_NAMESPACE_CLOSE_SCOPE