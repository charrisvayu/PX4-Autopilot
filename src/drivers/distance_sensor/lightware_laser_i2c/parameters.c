/****************************************************************************
 *
 *   Copyright (c) 2017 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * Lightware SF1xx/SF20/LW20 laser rangefinder (i2c)
 *
 * @reboot_required true
 * @min 0
 * @max 6
 * @group Sensors
 * @value 0 Disabled
 * @value 1 SF10/a
 * @value 2 SF10/b
 * @value 3 SF10/c
 * @value 4 SF11/c
 * @value 5 SF/LW20/b
 * @value 6 SF/LW20/c
 */
PARAM_DEFINE_INT32(SENS_EN_SF1XX, 0);

/**
 * LW20C ROTATION.
 *
 * 25: ROTATION_DOWNWARD_FACING
 * 24: ROTATION_UPWARD_FACING
 * 12: ROTATION_BACKWARD_FACING
 * 0: ROTATION_FORWARD_FACING
 * 6: ROTATION_LEFT_FACING
 * 2: ROTATION_RIGHT_FACING
 *
 * @min 0
 * @max 25
 */
PARAM_DEFINE_INT32(SENS_LW20C_R_0, 25);
