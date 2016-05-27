
#include "openssl/ssl.h"
#include "openssl/err.h"
#include "openssl/x509.h"
#include "openssl/sha.h"
#include "openssl/bio.h"

#ifdef SSL_CTRL_SET_ECDH_AUTO
int openssl_compat_have_ecdh_auto = 1;
#else
int openssl_compat_have_ecdh_auto = 0;
int SSL_CTRL_SET_ECDH_AUTO = 0;
#endif
