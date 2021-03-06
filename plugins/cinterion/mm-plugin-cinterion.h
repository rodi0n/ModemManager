/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Copyright (C) 2011 Ammonit Measurement GmbH
 * Author: Aleksander Morgado <aleksander@lanedo.com>
 */

#ifndef MM_PLUGIN_CINTERION_H
#define MM_PLUGIN_CINTERION_H

#include "mm-plugin.h"

#define MM_TYPE_PLUGIN_CINTERION            (mm_plugin_cinterion_get_type ())
#define MM_PLUGIN_CINTERION(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), MM_TYPE_PLUGIN_CINTERION, MMPluginCinterion))
#define MM_PLUGIN_CINTERION_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  MM_TYPE_PLUGIN_CINTERION, MMPluginCinterionClass))
#define MM_IS_PLUGIN_CINTERION(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MM_TYPE_PLUGIN_CINTERION))
#define MM_IS_PLUGIN_CINTERION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  MM_TYPE_PLUGIN_CINTERION))
#define MM_PLUGIN_CINTERION_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  MM_TYPE_PLUGIN_CINTERION, MMPluginCinterionClass))

typedef struct {
    MMPlugin parent;
} MMPluginCinterion;

typedef struct {
    MMPluginClass parent;
} MMPluginCinterionClass;

GType mm_plugin_cinterion_get_type (void);

G_MODULE_EXPORT MMPlugin *mm_plugin_create (void);

#endif /* MM_PLUGIN_CINTERION_H */
