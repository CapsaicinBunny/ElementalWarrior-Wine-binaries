/*
 * Copyright (C) 2023 Mohamad Al-Jaf
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#define DXCORE_INIT_GUID
#include "private.h"


WINE_DEFAULT_DEBUG_CHANNEL(dxcore);

HRESULT WINAPI DXCoreCreateAdapterFactory( REFIID riid, void **ppv )
{
    TRACE( "riid %s, ppv %p\n", debugstr_guid(riid), ppv );
    return dxcore_factory_create(riid, ppv);
}
