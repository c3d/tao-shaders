# ******************************************************************************
#  flares.pro                                                       Tao project
# ******************************************************************************
# File Description:
# Qt build file for the Flares module
#
# The Monjori module defines a GLSL shader 
#
# ******************************************************************************
# This software is property of Taodyne SAS - Confidential
# Ce logiciel est la propriété de Taodyne SAS - Confidentiel
# (C) 2011 Jerome Forissier <jerome@taodyne.com>
# (C) 2011 Taodyne SAS
# ******************************************************************************

MODINSTDIR = flares

TAO_SDK = ../../..
include($${TAO_SDK}/modules/modules.pri)

OTHER_FILES = flares.xl module.doxy.h

INSTALLS    += thismod_icon
INSTALLS    -= thismod_bin
