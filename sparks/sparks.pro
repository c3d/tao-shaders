# ******************************************************************************
#  sparks.pro                                                        Tao project
# ******************************************************************************
# File Description:
# Qt build file for the Sparks module
#
# The Sparks module defines a GLSL shader
#
# ******************************************************************************
# This software is property of Taodyne SAS - Confidential
# Ce logiciel est la propriété de Taodyne SAS - Confidentiel
# (C) 2011 Jerome Forissier <jerome@taodyne.com>
# (C) 2011 Taodyne SAS
# ******************************************************************************

MODINSTDIR = sparks

TAO_SDK = ../../..
include($${TAO_SDK}/modules/modules.pri)

OTHER_FILES = sparks.xl sparks.doxy.h \
    sparks2.xl

files.path  = $$APPINST/modules/sparks
files.files = LICENSE

CRYPT_XL_SOURCES = sparks2.xl
include(../../crypt_xl.pri)

INSTALLS    += thismod_icon files
INSTALLS    -= thismod_bin

LICENSE_FILES = sparks.taokey.notsigned
include(../../licenses.pri)

QMAKE_SUBSTITUTES = doc/Doxyfile.in
DOXYFILE = doc/Doxyfile
include(../../modules_doc.pri)
