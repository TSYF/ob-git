# $FreeBSD: head/multimedia/obs-scrab/Makefile 531642 2020-04-14 00:34:15Z yuri $

PORTNAME=	obs-scrab
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1
CATEGORIES=	multimedia

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	OBS Studio Plugin: Screenshot plugin

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libobs.so:multimedia/obs-studio

USES=		cmake localbase:ldflags qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	univrsal
GH_PROJECT=	scrab
USE_QT=		core gui widgets buildtools_build qmake_build

CXXFLAGS+=	-I${LOCALBASE}/include/obs

PLIST_FILES=	lib/obs-plugins/scrab.so \
		share/obs/obs-plugins/scrab/locale/en-US.ini

.include <bsd.port.mk>
