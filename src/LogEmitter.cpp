// Copyright 2016-2022 The Mumble Developers. All rights reserved.
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file at the root of the
// Mumble source tree or at <https://www.mumble.info/LICENSE>.

#include "LogEmitter.h"

LogEmitter::LogEmitter(QObject *p) : QObject(p){};

void LogEmitter::addLogEntry(const QString &msg) {
	emit newLogEntry(msg);
};
