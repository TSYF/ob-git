# Created by: Franz Bettag <franz@bett.ag>
# $FreeBSD: head/multimedia/oscam/Makefile 559846 2021-01-01 16:24:16Z pi $

PORTNAME=	oscam
PORTVERSION=	1.20.20201119
CATEGORIES=	multimedia
MASTER_SITES=	https://repo.or.cz/oscam.git/snapshot/877648ea724dac9c9d608e5b1f14fefeb263500e.tar.gz?/

MAINTAINER=	franz@bett.ag
COMMENT=	Softcam software to decrypt digital TV channels

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpcsclite.so:devel/pcsc-lite

USES=		gmake localbase ssl
USE_RC_SUBR=	oscam

OPTIONS_DEFINE=	EXAMPLES

MAKE_ARGS=	CC="${CC}" HOSTCC="${CC}" \
		USE_LIBCRYPTO=1 USE_LIBUSB=1 USE_PCSC=1 USE_SSL=1 \
		USE_UTF8=1 LIBUSB_LIB=-lusb \
		OSCAM_BIN="Distribution/oscam" CONF_DIR="${PREFIX}/etc/oscam" \
		V=1

WRKSRC=		${WRKDIR}/${PORTNAME}-877648e

.include <bsd.port.pre.mk>

.if ${ARCH:Mmips*}
USE_GCC=	yes
.endif

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/Distribution/oscam ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/Distribution/doc/man/*.1 ${STAGEDIR}${PREFIX}/man/man1/
	${INSTALL_MAN} ${WRKSRC}/Distribution/doc/man/*.5 ${STAGEDIR}${PREFIX}/man/man5/

do-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/
	${INSTALL_DATA} ${WRKSRC}/Distribution/doc/example/* ${STAGEDIR}${EXAMPLESDIR}/

.include <bsd.port.post.mk>
