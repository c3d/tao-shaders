# ******************************************************************************
#  monjori.pro                                                      Tao project
# ******************************************************************************
# File Description:
# Qt build file for the Monjori module
#
# The Monjori module defines a GLSL shader 
#
# ******************************************************************************
# This software is property of Taodyne SAS - Confidential
# Ce logiciel est la propriété de Taodyne SAS - Confidentiel
# (C) 2011 Jerome Forissier <jerome@taodyne.com>
# (C) 2011 Taodyne SAS
# ******************************************************************************

MODINSTDIR = monjori

TAO_SDK = ../../..
include($${TAO_SDK}/modules/modules.pri)

OTHER_FILES = monjori.xl module.doxy.h \
    monjori2.xl

CRYPT_XL_SOURCES = monjori2.xl
include(../../crypt_xl.pri)

INSTALLS    += thismod_icon
INSTALLS    -= thismod_bin

LICENSE_FILES = monjori.taokey.notsigned
include(../../licenses.pri)

