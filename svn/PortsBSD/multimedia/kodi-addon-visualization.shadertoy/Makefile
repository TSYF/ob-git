# Created by: Rozhuk Ivan <rozhuk.im@gmail.com>
# $FreeBSD: head/multimedia/kodi-addon-visualization.shadertoy/Makefile 569025 2021-03-23 13:14:13Z decke $

PORTNAME=	visualization.shadertoy
PORTVERSION=	2.3.0
DISTVERSIONSUFFIX=	-Matrix
CATEGORIES=	multimedia

MAINTAINER=	rozhuk.im@gmail.com
COMMENT=	Shadertoy visualizer for Kodi

LICENSE=	GPLv2+

BUILD_DEPENDS=	glm>0:math/glm

USES=		cmake localbase compiler:c++14-lang kodi
USE_CXXSTD=	c++14
USE_GITHUB=	yes
GH_ACCOUNT=	xbmc
USE_GL=		egl gl glu

PLIST_SUB=	SOVERSION=${PORTVERSION}

CMAKE_ARGS=	-DADDONS_TO_BUILD=${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's|delete buffer;|delete[] buffer;|g' \
		${WRKSRC}/src/main.cpp

.include <bsd.port.mk>
