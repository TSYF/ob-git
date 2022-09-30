# Created by: Rozhuk Ivan <rozhuk.im@gmail.com>
# $FreeBSD: head/multimedia/kodi-addon-screensaver.biogenesis/Makefile 566853 2021-03-01 14:04:51Z decke $

PORTNAME=	screensaver.biogenesis
PORTVERSION=	2.5.0
DISTVERSIONSUFFIX=	-Matrix
CATEGORIES=	multimedia

MAINTAINER=	rozhuk.im@gmail.com
COMMENT=	BioGenesis screensaver for Kodi

LICENSE=	GPLv2+

USES=		cmake gl kodi
USE_GITHUB=	yes
GH_ACCOUNT=	xbmc
USE_GL=		egl gl glu

PLIST_SUB=	SOVERSION=${PORTVERSION}

CMAKE_ARGS=	-DADDONS_TO_BUILD=${PORTNAME}

.include <bsd.port.mk>
