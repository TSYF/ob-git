# Created by: mm
# $FreeBSD: head/multimedia/libquicktime-lame/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	libquicktime
PORTREVISION=	6
CATEGORIES=	multimedia
PKGNAMESUFFIX=	-lame

MAINTAINER=	ports@FreeBSD.org
COMMENT=	LAME plugin for libquicktime

LIB_DEPENDS=	libquicktime.so:multimedia/libquicktime \
		libmp3lame.so:audio/lame

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

MASTERDIR=	${.CURDIR}/../libquicktime
PLIST=		${.CURDIR}/pkg-plist

_BUILDING_LIBQUICKTIME_PLUGINS=	yes

CONFIGURE_ARGS+=	--with-lame \
			--without-x \
			--without-cpuflags \
			--without-gtk \
			--without-opengl \
			--without-libdv \
			--without-libjpeg \
			--without-libpng \
			--without-ffmpeg \
			--without-faac \
			--without-faad2 \
			--without-x264 \
			--without-schroedinger

do-install:
	@cd ${WRKSRC}/plugins/lame && ${SETENV} ${MAKE_ENV} \
		${MAKE_CMD} ${INSTALL_TARGET} ${MAKE_ARGS}

.include "${MASTERDIR}/Makefile"
