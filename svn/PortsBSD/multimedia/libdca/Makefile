# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: head/multimedia/libdca/Makefile 568664 2021-03-17 14:34:03Z jhale $

PORTNAME=	libdca
PORTVERSION=	0.0.7
CATEGORIES=	multimedia
MASTER_SITES=	http://download.videolan.org/pub/videolan/${PORTNAME}/${PORTVERSION}/

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Free DTS Coherent Acoustics decoder

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf libtool pathfix pkgconfig tar:bzip2
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
