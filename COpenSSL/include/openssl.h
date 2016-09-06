
#include "openssl/ssl.h"
#include "openssl/err.h"
#include "openssl/x509.h"
#include "openssl/sha.h"
#include "openssl/bio.h"

#ifndef SSL_CTRL_SET_ECDH_AUTO
int SSL_CTRL_SET_ECDH_AUTO;
#endif
int openssl_compat_have_ecdh_auto;
