# $FreeBSD: head/devel/libosmo-abis/Makefile 569118 2021-03-24 13:34:35Z rene $

PORTNAME=	libosmo-abis
PORTVERSION=	0.7.0
CATEGORIES=	devel
MASTER_SITES=	http://git.osmocom.org/libosmo-abis/snapshot/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Shared code regarding the A-bis interface between BTS and BSC

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Uses EOL Python 2.7 via devel/libosmocore
EXPIRATION_DATE=2021-06-23

LIB_DEPENDS=	libosmocore.so:devel/libosmocore \
		libtalloc.so:devel/talloc \
		libortp.so:net/ortp

USES=		autoreconf gmake libtool pathfix pkgconfig
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

post-patch:
	${ECHO_CMD} ${PORTVERSION} > ${WRKSRC}/.tarball-version

.include <bsd.port.mk>
