//
// Copyright 2018 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//

#include "pxr/pxr.h"
#include "pxr/base/tf/pyModule.h"

PXR_NAMESPACE_USING_DIRECTIVE

TF_WRAP_MODULE
{
    TF_WRAP( Declare );
    TF_WRAP( DiscoveryPlugin );
    TF_WRAP( FilesystemDiscovery );
    TF_WRAP( FilesystemDiscoveryHelpers );
    TF_WRAP( SdfTypeIndicator );
    TF_WRAP( ShaderProperty );
    TF_WRAP( ShaderNode );
    TF_WRAP( ShaderNodeDiscoveryResult );
    TF_WRAP( Registry );
}
