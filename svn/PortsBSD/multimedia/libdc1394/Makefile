# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/multimedia/libdc1394/Makefile 514782 2019-10-19 09:39:07Z amdmi3 $

PORTNAME=	libdc1394
DISTVERSION=	2.2.6
CATEGORIES=	multimedia
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-2/${PORTVERSION}/

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	1394-based DC Control Library

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool pathfix
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
