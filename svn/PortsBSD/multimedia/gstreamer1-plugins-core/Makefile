# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/multimedia/gstreamer1-plugins-core/Makefile 524224 2020-01-26 17:42:36Z kwm $

PORTNAME=	gstreamer1-plugins-core
PORTVERSION=	1.16
CATEGORIES=	multimedia audio
MASTER_SITES=	# empty
DISTFILES=	# empty
EXTRACT_ONLY=	# empty

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Core set of typical audio and video GStreamer plugins

NO_BUILD=	yes
GST_DIR=	lib/gstreamer-1.0
PLIST_FILES=	${GST_DIR}/.gstreamer-plugins-core.keep

USE_GSTREAMER1=yes

OPTIONS_DEFINE=	DVD
OPTIONS_DEFAULT=DVD
DVD_DESC=	Include DVD related plugins

.include <bsd.port.options.mk>

# Audio plugins
USE_GSTREAMER1+=	mpg123 ogg vorbis

# Graphics plugins
USE_GSTREAMER1+=	png

# Misc plugins
USE_GSTREAMER1+=	pango

# Multimedia plugins
USE_GSTREAMER1+=	libav good theora

.if ${PORT_OPTIONS:MDVD}
# dvd related plugins plugins
USE_GSTREAMER1+=	a52dec dvdread resindvd dts
.endif

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${GST_DIR}
	${TOUCH} -f ${STAGEDIR}${PREFIX}/${GST_DIR}/.gstreamer-plugins-core.keep

.include <bsd.port.mk>
