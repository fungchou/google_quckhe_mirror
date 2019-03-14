// Copyright (c) 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef QUICHE_QUIC_CORE_CRYPTO_AES_128_GCM_DECRYPTER_H_
#define QUICHE_QUIC_CORE_CRYPTO_AES_128_GCM_DECRYPTER_H_

#include <cstdint>

#include "net/third_party/quiche/src/quic/core/crypto/aead_base_decrypter.h"
#include "net/third_party/quiche/src/quic/platform/api/quic_export.h"

namespace quic {

// An Aes128GcmDecrypter is a QuicDecrypter that implements the
// AEAD_AES_128_GCM algorithm specified in RFC 5116 for use in IETF QUIC.
//
// It uses an authentication tag of 16 bytes (128 bits). It uses a 12 byte IV
// that is XOR'd with the packet number to compute the nonce.
class QUIC_EXPORT_PRIVATE Aes128GcmDecrypter : public AeadBaseDecrypter {
 public:
  enum {
    kAuthTagSize = 16,
  };

  Aes128GcmDecrypter();
  Aes128GcmDecrypter(const Aes128GcmDecrypter&) = delete;
  Aes128GcmDecrypter& operator=(const Aes128GcmDecrypter&) = delete;
  ~Aes128GcmDecrypter() override;

  uint32_t cipher_id() const override;
};

}  // namespace quic

#endif  // QUICHE_QUIC_CORE_CRYPTO_AES_128_GCM_DECRYPTER_H_
