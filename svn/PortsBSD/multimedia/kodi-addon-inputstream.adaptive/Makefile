# $FreeBSD: head/multimedia/kodi-addon-inputstream.adaptive/Makefile 569356 2021-03-27 20:57:02Z decke $

PORTNAME=	inputstream.adaptive
DISTVERSION=	2.6.8
DISTVERSIONSUFFIX=	-Matrix
CATEGORIES=	multimedia

MAINTAINER=	decke@FreeBSD.org
COMMENT=	Adaptive stream support for Kodi

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE.GPL

LIB_DEPENDS=	libexpat.so:textproc/expat2

USES=		cmake compiler:c++14-lang kodi
USE_GITHUB=	yes
GH_ACCOUNT=	peak3d

.include <bsd.port.mk>
