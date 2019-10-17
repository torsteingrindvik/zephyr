/*
 * Copyright (c) 2018 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __CA_CERTIFICATE_H__
#define __CA_CERTIFICATE_H__

#define CA_CERTIFICATE_TAG 1
#define PSK_TAG 2

#define TLS_PEER_HOSTNAME "localhost"

/* This is the same cert as what is found in net-tools/echo-apps-cert.pem file
 */
static const unsigned char ca_certificate[] = {
#include "echo-apps-cert.der.inc"
};

#if defined(CONFIG_MBEDTLS_KEY_EXCHANGE_PSK_ENABLED)
static const unsigned char client_psk[] = {0x01, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f};
static const char client_psk_id[] = "Client_identity";
#endif

#endif /* __CA_CERTIFICATE_H__ */
