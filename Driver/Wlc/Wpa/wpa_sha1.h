/*
 * SHA1 hash implementation and interface functions
 * Copyright (c) 2003-2005, Jouni Malinen <j@w1.fi>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Alternatively, this software may be distributed under the terms of BSD
 * license.
 *
 * See README and COPYING for more details.
 */

#ifndef WPA_SHA1_H
#define WPA_SHA1_H

#define SHA1_MAC_LEN 20

void hmac_sha1_vector(const uint8 *key, size_t key_len, size_t num_elem,
		      const uint8 *addr[], const size_t *len, uint8 *mac);
void hmac_sha1(const uint8 *key, size_t key_len, const uint8 *data, size_t data_len,
	       uint8 *mac);
void sha1_prf(const uint8 *key, size_t key_len, const char *label,
	      const uint8 *data, size_t data_len, uint8 *buf, size_t buf_len);
void sha1_t_prf(const uint8 *key, size_t key_len, const char *label,
		const uint8 *seed, size_t seed_len, uint8 *buf, size_t buf_len);
int tls_prf(const uint8 *secret, size_t secret_len, const char *label,
	    const uint8 *seed, size_t seed_len, uint8 *out, size_t outlen);
void pbkdf2_sha1(const char *passphrase, const char *ssid, size_t ssid_len,
		 int iterations, uint8 *buf, size_t buflen);

#ifdef CONFIG_CRYPTO_INTERNAL
struct SHA1Context;

void SHA1Init(struct SHA1Context *context);
void SHA1Update(struct SHA1Context *context, const void *data, u32 len);
void SHA1Final(unsigned char digest[20], struct SHA1Context *context);
#endif /* CONFIG_CRYPTO_INTERNAL */

#endif /* SHA1_H */
