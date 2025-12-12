/* SPDX-License-Identifier: GPL-2.0-or-later */
#ifndef COMPAT_H
#define COMPAT_H

#include <linux/version.h>
#include <net/devlink.h>

// pre v6.16 compat
#ifndef timer_container_of
#define timer_container_of from_timer
#endif

static inline struct devlink_health_reporter *
compat_devlink_health_reporter_create(struct devlink *devlink,
				      const struct devlink_health_reporter_ops *ops,
				      u64 graceful_period,
				      void *priv)
{
#if LINUX_VERSION_CODE < KERNEL_VERSION(6, 18, 0)
	return devlink_health_reporter_create(devlink, ops, graceful_period, priv);
#else
	return devlink_health_reporter_create(devlink, ops, priv);
#endif
}

#endif /* COMPAT_H */
