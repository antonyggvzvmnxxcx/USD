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

#ifndef PXR_USD_IMAGING_USD_IMAGING_USD_RENDER_VAR_SCHEMA_H
#define PXR_USD_IMAGING_USD_IMAGING_USD_RENDER_VAR_SCHEMA_H

/// \file

#include "pxr/usdImaging/usdImaging/api.h"

#include "pxr/imaging/hd/schema.h"

// --(BEGIN CUSTOM CODE: Includes)--
// --(END CUSTOM CODE: Includes)--

PXR_NAMESPACE_OPEN_SCOPE

// --(BEGIN CUSTOM CODE: Declares)--
// --(END CUSTOM CODE: Declares)--

#define USD_IMAGING_USD_RENDER_VAR_SCHEMA_TOKENS \
    (__usdRenderVar) \
    (dataType) \
    (sourceName) \
    (sourceType) \
    (namespacedSettings) \

TF_DECLARE_PUBLIC_TOKENS(UsdImagingUsdRenderVarSchemaTokens, USDIMAGING_API,
    USD_IMAGING_USD_RENDER_VAR_SCHEMA_TOKENS);

//-----------------------------------------------------------------------------


class UsdImagingUsdRenderVarSchema : public HdSchema
{
public:
    /// \name Schema retrieval
    /// @{

    UsdImagingUsdRenderVarSchema(HdContainerDataSourceHandle container)
      : HdSchema(container) {}

    /// Retrieves a container data source with the schema's default name token
    /// "__usdRenderVar" from the parent container and constructs a
    /// UsdImagingUsdRenderVarSchema instance.
    /// Because the requested container data source may not exist, the result
    /// should be checked with IsDefined() or a bool comparison before use.
    USDIMAGING_API
    static UsdImagingUsdRenderVarSchema GetFromParent(
        const HdContainerDataSourceHandle &fromParentContainer);

    /// @}

// --(BEGIN CUSTOM CODE: Schema Methods)--
// --(END CUSTOM CODE: Schema Methods)--

    /// \name Member accessor
    /// @{

    USDIMAGING_API
    HdTokenDataSourceHandle GetDataType() const;

    USDIMAGING_API
    HdStringDataSourceHandle GetSourceName() const;

    USDIMAGING_API
    HdTokenDataSourceHandle GetSourceType() const;

    USDIMAGING_API
    HdContainerDataSourceHandle GetNamespacedSettings() const; 

    /// @}

    /// \name Schema location
    /// @{

    /// Returns a token where the container representing this schema is found in
    /// a container by default.
    USDIMAGING_API
    static const TfToken &GetSchemaToken();

    /// Returns an HdDataSourceLocator (relative to the prim-level data source)
    /// where the container representing this schema is found by default.
    USDIMAGING_API
    static const HdDataSourceLocator &GetDefaultLocator();

    /// @}

    /// \name Data source locators for members
    ///
    /// The following methods return an HdDataSourceLocator (relative to the
    /// prim-level data source) where the data source for a member can be found.
    ///
    /// This is often useful for checking intersection against the
    /// HdDataSourceLocatorSet sent with HdDataSourceObserver::PrimsDirtied.
    /// @{

    /// Prim-level relative data source locator to locate namespacedSettings.
    USDIMAGING_API
    static const HdDataSourceLocator &GetNamespacedSettingsLocator();
    /// @} 

    /// \name Schema construction
    /// @{

    /// \deprecated Use Builder instead.
    ///
    /// Builds a container data source which includes the provided child data
    /// sources. Parameters with nullptr values are excluded. This is a
    /// low-level interface. For cases in which it's desired to define
    /// the container with a sparse set of child fields, the Builder class
    /// is often more convenient and readable.
    USDIMAGING_API
    static HdContainerDataSourceHandle
    BuildRetained(
        const HdTokenDataSourceHandle &dataType,
        const HdStringDataSourceHandle &sourceName,
        const HdTokenDataSourceHandle &sourceType,
        const HdContainerDataSourceHandle &namespacedSettings
    );

    /// \class UsdImagingUsdRenderVarSchema::Builder
    /// 
    /// Utility class for setting sparse sets of child data source fields to be
    /// filled as arguments into BuildRetained. Because all setter methods
    /// return a reference to the instance, this can be used in the "builder
    /// pattern" form.
    class Builder
    {
    public:
        USDIMAGING_API
        Builder &SetDataType(
            const HdTokenDataSourceHandle &dataType);
        USDIMAGING_API
        Builder &SetSourceName(
            const HdStringDataSourceHandle &sourceName);
        USDIMAGING_API
        Builder &SetSourceType(
            const HdTokenDataSourceHandle &sourceType);
        USDIMAGING_API
        Builder &SetNamespacedSettings(
            const HdContainerDataSourceHandle &namespacedSettings);

        /// Returns a container data source containing the members set thus far.
        USDIMAGING_API
        HdContainerDataSourceHandle Build();

    private:
        HdTokenDataSourceHandle _dataType;
        HdStringDataSourceHandle _sourceName;
        HdTokenDataSourceHandle _sourceType;
        HdContainerDataSourceHandle _namespacedSettings;

    };

    /// @}
};

PXR_NAMESPACE_CLOSE_SCOPE

#endif