/* SPDX-License-Identifier: GPL-2.0-or-later */
#ifndef COMPAT_H
#define COMPAT_H

// pre v6.16 compat
#ifndef timer_container_of
#define timer_container_of from_timer
#endif

#endif /* COMPAT_H */
