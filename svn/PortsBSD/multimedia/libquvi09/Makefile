# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/multimedia/libquvi09/Makefile 486266 2018-11-30 20:01:54Z sunpoet $

PORTNAME=	libquvi
PORTVERSION=	0.9.4
PORTREVISION=	4
CATEGORIES=	multimedia devel
MASTER_SITES=	SF/quvi/${PORTVERSION:R}/${PORTNAME}/ \
		LOCAL/sunpoet
PKGNAMESUFFIX=	09

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Cross-platform library for parsing flash media stream URLs

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${RUN_DEPENDS}
LIB_DEPENDS=	libcurl.so:ftp/curl \
		libproxy.so:net/libproxy \
		libgcrypt.so:security/libgcrypt
RUN_DEPENDS=	libquvi-scripts09>=0.9:multimedia/libquvi-scripts09

OPTIONS_DEFINE=	DOCS

USES=		gnome iconv libtool lua pathfix pkgconfig tar:xz

CONFIGURE_ARGS=	--program-suffix=${PKGNAMESUFFIX}
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_GNOME=	glib20

PLIST_SUB=	PKGNAMESUFFIX=${PKGNAMESUFFIX} PORTVERSION=${PORTVERSION} QUVIVERSION=${PORTVERSION:R}

post-patch:
	@${REINPLACE_CMD} 's/lua-5.1/lua-${LUA_VER}/g' ${WRKSRC}/configure

.include <bsd.port.mk>
