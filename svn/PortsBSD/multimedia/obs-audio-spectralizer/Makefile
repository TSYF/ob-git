# $FreeBSD: head/multimedia/obs-audio-spectralizer/Makefile 563221 2021-01-29 17:35:14Z yuri $

PORTNAME=	obs-audio-spectralizer
DISTVERSIONPREFIX=	v
DISTVERSION=	1.3.4
CATEGORIES=	multimedia

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	OBS Studio Plugin: Audio visualizer

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING.txt

LIB_DEPENDS=	libfftw3.so:math/fftw3 \
		libobs.so:multimedia/obs-studio

USES=		cmake localbase:ldflags
USE_GITHUB=	yes
GH_ACCOUNT=	univrsal
GH_PROJECT=	spectralizer

CMAKE_ON=	GLOBAL_INSTALLATION USE_CMAKE_LIBDIR

CXXFLAGS+=	-I${LOCALBASE}/include/obs

PLIST_FILES=	lib/obs-plugins/spectralizer.so \
		share/obs/obs-plugins/spectralizer/locale/en-US.ini \
		share/obs/obs-plugins/spectralizer/locale/ko-KR.ini \
		share/obs/obs-plugins/spectralizer/locale/ru-RU.ini

.include <bsd.port.mk>
