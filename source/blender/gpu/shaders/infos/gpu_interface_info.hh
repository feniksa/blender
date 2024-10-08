/* SPDX-FileCopyrightText: 2022 Blender Authors
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */

/** \file
 * \ingroup gpu
 */

#pragma once

#include "gpu_shader_create_info.hh"

GPU_SHADER_INTERFACE_INFO(flat_color_iface)
FLAT(VEC4, finalColor)
GPU_SHADER_INTERFACE_END()

GPU_SHADER_INTERFACE_INFO(no_perspective_color_iface)
NO_PERSPECTIVE(VEC4, finalColor)
GPU_SHADER_INTERFACE_END()

GPU_SHADER_INTERFACE_INFO(smooth_color_iface)
SMOOTH(VEC4, finalColor)
GPU_SHADER_INTERFACE_END()

GPU_SHADER_INTERFACE_INFO(smooth_tex_coord_interp_iface)
SMOOTH(VEC2, texCoord_interp)
GPU_SHADER_INTERFACE_END()

GPU_SHADER_INTERFACE_INFO(smooth_radii_iface)
SMOOTH(VEC2, radii)
GPU_SHADER_INTERFACE_END()

GPU_SHADER_INTERFACE_INFO(smooth_radii_outline_iface)
SMOOTH(VEC4, radii)
GPU_SHADER_INTERFACE_END()

GPU_SHADER_INTERFACE_INFO(flat_color_smooth_tex_coord_interp_iface)
FLAT(VEC4, finalColor)
SMOOTH(VEC2, texCoord_interp)
GPU_SHADER_INTERFACE_END()

GPU_SHADER_INTERFACE_INFO(smooth_icon_interp_iface)
SMOOTH(VEC2, texCoord_interp)
SMOOTH(VEC2, mask_coord_interp)
GPU_SHADER_INTERFACE_END()
