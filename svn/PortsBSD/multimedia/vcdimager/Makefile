# Created by: Harold Gutch <logix@foobar.franken.de>
# $FreeBSD: head/multimedia/vcdimager/Makefile 519931 2019-12-12 15:11:33Z jhale $

PORTNAME=	vcdimager
PORTVERSION=	2.0.1
PORTREVISION=	2
CATEGORIES=	multimedia
MASTER_SITES=	GNU

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	GNU VCDImager/VCDRip -- The GNU VideoCD Image Maker/Ripping Tool

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpopt.so:devel/popt \
		libxml2.so:textproc/libxml2 \
		libcdio.so:sysutils/libcdio

USES=		gmake libtool localbase makeinfo pathfix pkgconfig
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

INFO=		vcdimager vcdxrip vcd-info

.include <bsd.port.mk>
