# Created by: Bernhard Froehlich <decke@FreeBSD.org>
# $FreeBSD: head/multimedia/kodi-addon-pvr.hts/Makefile 569191 2021-03-25 09:49:03Z decke $

PORTNAME=	pvr.hts
DISTVERSION=	8.3.0
DISTVERSIONSUFFIX=	-Matrix
CATEGORIES=	multimedia

MAINTAINER=	decke@FreeBSD.org
COMMENT=	Tvheadend PVR addon for Kodi

LICENSE=	GPLv2+

LIB_DEPENDS=	libpugixml.so:textproc/pugixml

USES=		cmake:noninja compiler:c++17-lang kodi

USE_GITHUB=	yes
GH_ACCOUNT=	kodi-pvr

.include <bsd.port.mk>
