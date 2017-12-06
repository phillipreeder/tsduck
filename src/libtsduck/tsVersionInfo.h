//----------------------------------------------------------------------------
//
// TSDuck - The MPEG Transport Stream Toolkit
// Copyright (c) 2005-2017, Thierry Lelegard
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
// THE POSSIBILITY OF SUCH DAMAGE.
//
//----------------------------------------------------------------------------
//!
//!  @file
//!  Information about version identification of TSDuck.
//!
//----------------------------------------------------------------------------

#pragma once
#include "tsEnumeration.h"

//!
//! TSDuck namespace, containing all TSDuck classes and functions.
//!
namespace ts {

    //!
    //! Types of version formatting, for predefined option --version.
    //!
    enum VersionFormat {
        VERSION_SHORT,   //!< Short format X.Y-R.
        VERSION_LONG,    //!< Full explanatory format.
        VERSION_DATE,    //!< Build date.
        VERSION_NSIS,    //!< Output NSIS @c !define directives.
        VERSION_DEKTEC,  //!< Version of embedded Dektec DTAPI and detected Dektec drivers.
        VERSION_TINYXML, //!< Version of embedded TinyXML-2.
    };

    //!
    //! Enumeration description of ts::VersionFormat.
    //! Typically used to implement the -\-version command line option.
    //!
    TSDUCKDLL extern const Enumeration VersionFormatEnum;

    //!
    //! Get the TSDuck formatted version number.
    //! @param [in] format Type of output, short by default.
    //! @param [in] applicationName Name of the application to prepend to the long format.
    //! @return The formatted version string.
    //!
    TSDUCKDLL UString GetVersion(VersionFormat format = VERSION_SHORT, const UString& applicationName = UString());
}
