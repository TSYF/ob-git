# Created by: Rozhuk Ivan <rozhuk.im@gmail.com>
# $FreeBSD: head/multimedia/kodi-addon-visualization.spectrum/Makefile 569024 2021-03-23 13:11:26Z decke $

PORTNAME=	visualization.spectrum
PORTVERSION=	3.4.0
DISTVERSIONSUFFIX=	-Matrix
CATEGORIES=	multimedia

MAINTAINER=	rozhuk.im@gmail.com
COMMENT=	Spectrum visualizer for Kodi

LICENSE=	GPLv2+

BUILD_DEPENDS=	glm>0:math/glm

USES=		cmake localbase compiler:c++14-lang kodi
USE_CXXSTD=	c++14
USE_GITHUB=	yes
GH_ACCOUNT=	xbmc
USE_GL=		egl gl glu

PLIST_SUB=	SOVERSION=${PORTVERSION}

CMAKE_ARGS=	-DADDONS_TO_BUILD=${PORTNAME}

.include <bsd.port.mk>
