# $FreeBSD: head/multimedia/musikcube/Makefile 564074 2021-02-05 02:03:38Z swills $

PORTNAME=	musikcube
DISTVERSION=	0.96.5
PORTREVISION=	1
CATEGORIES=	multimedia audio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Terminal-based music player, audio engine, metadata indexer, server

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg \
		libboost_system.so:devel/boost-libs \
		libcurl.so:ftp/curl \
		libev.so:devel/libev \
		libfaad.so:audio/faad \
		libFLAC.so:audio/flac \
		libmicrohttpd.so:www/libmicrohttpd \
		libmp3lame.so:audio/lame \
		libogg.so:audio/libogg \
		libsndio.so:audio/sndio \
		libtag.so:audio/taglib \
		libvorbis.so:audio/libvorbis

USES=		cmake:noninja compiler:c++14-lang pkgconfig ssl

USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	clangen
LDFLAGS+=	-lncursesw -lpanelw -ltinfow

.include <bsd.port.options.mk>

.if ${OPSYS} == "FreeBSD" && ${OSVERSION} >= 1300079
USES+=		ncurses
.else
USES+=		ncurses:port
CFLAGS+=	-I${LOCALBASE}/include/ncurses
.endif

.include <bsd.port.mk>
