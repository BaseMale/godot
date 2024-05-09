/**************************************************************************/
/*  skeleton_3d_mirror_table.h                                            */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

#ifndef SKELETON_3D_MIRROR_TABLE_H
#define SKELETON_3D_MIRROR_TABLE_H

#include "core/io/resource.h"

class Skeleton3DMirrorTable : public Resource {
	GDCLASS(Skeleton3DMirrorTable, Resource)

public:
	enum Axis {
		AXIS_X,
		AXIS_Y,
		AXIS_Z,
		AXIS_NONE
	};

	struct BoneMirrorInfo {
		String bone_name;
		String mirrored_bone_name;
		Axis flip_axis;
		Axis mirror_axis;
	};

private:
	Axis skeleton_mirror_axis;
	Axis skeleton_flip_axis;

	List<BoneMirrorInfo> mirror_info;

protected:
	static void _bind_methods();
};

VARIANT_ENUM_CAST(Skeleton3DMirrorTable::Axis);

#endif // SKELETON_3D_MIRROR_TABLE_H
