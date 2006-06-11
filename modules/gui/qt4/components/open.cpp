/*****************************************************************************
 * open.cpp : Panels for the open dialogs
 ****************************************************************************
 * Copyright (C) 2000-2005 the VideoLAN team
 * $Id: wxwidgets.cpp 15731 2006-05-25 14:43:53Z zorglub $
 *
 * Authors: Clément Stenac <zorglub@videolan.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#include "components/open.hpp"

/**************************************************************************
 * File open
 **************************************************************************/
FileOpenPanel::FileOpenPanel( QWidget *_parent, intf_thread_t *_p_intf ) :
                                OpenPanel( _parent, _p_intf )
{
    ui.setupUi( this );
}

FileOpenPanel::~FileOpenPanel()
{}

QString FileOpenPanel::getUpdatedMRL()
{
    return ui.fileInput->text();
}

/**************************************************************************
 * Net open
 **************************************************************************/
#if 0
NetOpenPanel::NetOpenPanel( QWidget *_parent, intf_thread_t *_p_intf ) :
                                OpenPanel( _parent, _p_intf )
{
    ui.setupUi( this );
}

NetOpenPanel::~NetOpenPanel()
{}

QString NetOpenPanel::getUpdatedMRL( )
{

}

void NetOpenPanel::sendUpdate()
{
    QString *mrl = new QString();
    QString *cache = new QString();
    getUpdatedMRL( mrl, cache );,
    emit dataUpdated( mrl, cache );
}
#endif
