# Created by: Petar Zhivkov Petrov <pesho.petrov@gmail.com>
# $FreeBSD: head/multimedia/libmtp/Makefile 563446 2021-01-31 01:55:19Z jbeich $

PORTNAME=	libmtp
PORTVERSION=	1.1.18
CATEGORIES=	multimedia audio
MASTER_SITES=	SF

MAINTAINER=	desktop@FreeBSD.org
COMMENT=	Media Transfer Protocol (MTP) library

LICENSE=	LGPL21+

CONFLICTS_INSTALL=libosmo-sccp-[0-9]* # lib/libmtp.a

USES=		iconv libtool localbase pathfix pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-doxygen
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	MTPZ
OPTIONS_DEFAULT=MTPZ

MTPZ_DESC=	Enable functionality to connect to MTPZ devices
MTPZ_CONFIGURE_ENABLE=	mtpz
MTPZ_LIB_DEPENDS=	libgcrypt.so:security/libgcrypt

.include <bsd.port.mk>
