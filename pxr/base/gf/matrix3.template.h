//
// Copyright 2016 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
////////////////////////////////////////////////////////////////////////
// This file is generated by a script.  Do not edit directly.  Edit the
// matrix3.template.h file to make changes.

{% extends "matrix.template.h" %}

{% block forwardDeclarations %}
class GfRotation;
class GfQuaternion;
class GfQuat{{ SCL[0] }};
{% endblock %}

{% block classDocs %}
/// <h3>3D Transformations</h3>
///
/// Three methods, SetRotate(), SetScale(), and ExtractRotation(), interpret
/// a {{ MAT }} as a 3D transformation. By convention, vectors are treated
/// primarily as row vectors, implying the following:
///
/// \li Transformation matrices are organized to deal with row
///        vectors, not column vectors.
/// \li Each of the Set() methods in this class completely rewrites the
///        matrix; for example, SetRotate() yields a matrix
///        which does nothing but rotate.
/// \li When multiplying two transformation matrices, the matrix
///        on the left applies a more local transformation to a row
///        vector. For example, if R represents a rotation
///        matrix and S represents a scale matrix, the
///        product R*S  will rotate a row vector, then scale
///        it.
{% endblock %}

{% block customDiagonalConstructors %}

    /// This explicit constructor initializes the matrix to \p s times
    /// the identity matrix.
    explicit {{ MAT }}(int s) {
        SetDiagonal(s);
    }

{% endblock customDiagonalConstructors %}

{% block customConstructors %}
    /// Constructor. Initialize matrix from rotation.
    GF_API
    {{ MAT }}(const GfRotation& rot);

    /// Constructor. Initialize matrix from a quaternion.
    GF_API
    explicit {{ MAT }}(const GfQuat{{ SCL[0] }}& rot);

{% endblock customConstructors %}

{% block customFunctions %}
    /// Makes the matrix orthonormal in place. This is an iterative method that
    /// is much more stable than the previous cross/cross method.  If the
    /// iterative method does not converge, a warning is issued.
    ///
    /// Returns true if the iteration converged, false otherwise.  Leaves any
    /// translation part of the matrix unchanged.  If \a issueWarning is true,
    /// this method will issue a warning if the iteration does not converge,
    /// otherwise it will be silent.
    GF_API
    bool Orthonormalize(bool issueWarning=true);

    /// Returns an orthonormalized copy of the matrix.
    GF_API
    {{ MAT }} GetOrthonormalized(bool issueWarning=true) const;

    /// Returns the sign of the determinant of the matrix, i.e. 1 for a
    /// right-handed matrix, -1 for a left-handed matrix, and 0 for a
    /// singular matrix.
    GF_API
    double GetHandedness() const;

    /// Returns true if the vectors in the matrix form a right-handed
    /// coordinate system.
    bool IsRightHanded() const {
        return GetHandedness() == 1.0;
    }

    /// Returns true if the vectors in matrix form a left-handed
    /// coordinate system.
    bool IsLeftHanded() const {
        return GetHandedness() == -1.0;
    }
{% endblock customFunctions %}

{% block customXformFunctions %}
    /// Sets matrix to specify a uniform scaling by \e scaleFactor.
    GF_API
    {{ MAT }}& SetScale({{ SCL }} scaleFactor);

    /// \name 3D Transformation Utilities
    /// @{

    /// Sets the matrix to specify a rotation equivalent to \e rot.
    GF_API
    {{ MAT }}& SetRotate(const GfQuat{{ SCL[0] }} &rot);

    /// Sets the matrix to specify a rotation equivalent to \e rot.
    GF_API
    {{ MAT }}& SetRotate(const GfRotation &rot);

    /// Sets the matrix to specify a nonuniform scaling in x, y, and z by
    /// the factors in vector \e scaleFactors.
    GF_API
    {{ MAT }}& SetScale(const GfVec3{{ SCL[0] }} &scaleFactors);

    /// Returns the rotation corresponding to this matrix. This works
    /// well only if the matrix represents a rotation.
    ///
    /// For good results, consider calling Orthonormalize() before calling
    /// this method.
    GF_API
    GfRotation ExtractRotation() const;

    /// Decompose the rotation corresponding to this matrix about 3
    /// orthogonal axes.  If the axes are not orthogonal, warnings
    /// will be spewed.
    ///
    /// This is a convenience method that is equivalent to calling
    /// ExtractRotation().Decompose().
    GF_API
    GfVec3{{ SCL[0] }} DecomposeRotation(const GfVec3{{ SCL[0] }} &axis0,
                              const GfVec3{{ SCL[0] }} &axis1,
                              const GfVec3{{ SCL[0] }} &axis2 ) const;

    /// Returns the quaternion corresponding to this matrix. This works
    /// well only if the matrix represents a rotation.
    ///
    /// For good results, consider calling Orthonormalize() before calling
    /// this method.
    GF_API
    GfQuaternion ExtractRotationQuaternion() const;

    /// @}

private:
    /// Set the matrix to the rotation given by a quaternion,
    /// defined by the real component \p r and imaginary components \p i.
    void _SetRotateFromQuat({{ SCL }} r, const GfVec3{{ SCL[0] }}& i);

{% endblock customXformFunctions %}

/* #endif */
