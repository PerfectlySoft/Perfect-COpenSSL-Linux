
#include "openssl/ssl.h"
#include "openssl/err.h"
#include "openssl/x509.h"
#include "openssl/sha.h"
#include "openssl/bio.h"
#include "openssl/hmac.h"
#include "openssl/rand.h"
#include "openssl/cms.h"
#include "openssl/md4.h"
#include "openssl/md5.h"
#include "openssl/sha.h"
#include "openssl/ripemd.h"
#include "openssl/whrlpool.h"

#ifndef SSL_CTRL_SET_ECDH_AUTO
int SSL_CTRL_SET_ECDH_AUTO;
#endif
int openssl_compat_have_ecdh_auto;
