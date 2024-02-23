/****************************************************************************
**
** Copyright (C) 2009-2023 Dr. Peter Droste, Omix Visualization GmbH & Co. KG. All rights reserved.
**
** This file is part of Qt Jambi.
**
** $BEGIN_LICENSE$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
** $END_LICENSE$
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#ifndef UTILS_P_H
#define UTILS_P_H

#include <QtJambi/QtJambiAPI>
#include <QtJambi/JavaAPI>

namespace Java{
namespace QtXml{
    QTJAMBI_REPOSITORY_DECLARE_CLASS(QDomDocument$Result,
                                     QTJAMBI_REPOSITORY_DECLARE_CONSTRUCTOR())
#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
    QTJAMBI_REPOSITORY_DECLARE_CLASS(QXmlEntityResolver$ResolvedEntity,
                                     QTJAMBI_REPOSITORY_DECLARE_CONSTRUCTOR()
                                     QTJAMBI_REPOSITORY_DECLARE_BOOLEAN_FIELD(error)
                                     QTJAMBI_REPOSITORY_DECLARE_OBJECT_FIELD(inputSource))
    QTJAMBI_REPOSITORY_DECLARE_CLASS(QXmlNamespaceSupport$ProcessedName,
                                     QTJAMBI_REPOSITORY_DECLARE_CONSTRUCTOR())
    QTJAMBI_REPOSITORY_DECLARE_CLASS(QXmlNamespaceSupport$SplitName,
                                     QTJAMBI_REPOSITORY_DECLARE_CONSTRUCTOR())
#endif
}
}
#endif // UTILS_P_H
