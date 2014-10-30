# ******************************************************************************
#  depth_of_field.pro                                               Tao project
# ******************************************************************************
# File Description:
#
#    Qt build file for the DepthOfField module
#
#
#
#
# ******************************************************************************
# This software is property of Taodyne SAS - Confidential
# Ce logiciel est la propriété de Taodyne SAS - Confidentiel
# (C) 2012 Jérôme Forissier <jerome@taodyne.com>
# (C) 2012 Taodyne SAS
# ******************************************************************************

MODINSTDIR = depth_of_field

include(../../modules.pri)

OTHER_FILES = depth_of_field.xl 

INSTALLS    += thismod_icon
INSTALLS    -= thismod_bin

HEADERS += doc/depth_of_field.doxy.h

QMAKE_SUBSTITUTES = doc/Doxyfile.in
DOXYFILE = doc/Doxyfile
DOXYLANG = en,fr
include(../../modules_doc.pri)
