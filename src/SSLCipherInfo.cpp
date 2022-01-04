// Copyright 2015-2022 The Mumble Developers. All rights reserved.
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file at the root of the
// Mumble source tree or at <https://www.mumble.info/LICENSE>.

#include "SSLCipherInfo.h"

// Include SSLCipherInfoTable generated by 'cipherinfo.py'.
#include "SSLCipherInfoTable.h"

#include <cstring>

const SSLCipherInfo *SSLCipherInfoLookupByOpenSSLName(const char *openSslCipherName) {
	int len = sizeof(cipher_info_lookup_table) / sizeof(*cipher_info_lookup_table);
	for (int i = 0; i < len; i++) {
		const SSLCipherInfo *ci = &cipher_info_lookup_table[i];
		if (!strcmp(ci->openssl_name, openSslCipherName)) {
			return ci;
		}
	}
	return nullptr;
}
