# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/multimedia/gstreamer1-plugins-bad/Makefile 483887 2018-11-03 11:58:10Z tijl $

PORTREVISION=	0
CATEGORIES=	multimedia

COMMENT=	GStreamer-plugins that need more quality, testing or documentation

GST_PLUGIN=	bad
GST_PLUGIN_SUFFIX=	-bad

MASTERDIR=	${.CURDIR}/../../multimedia/gstreamer1-plugins

BUILD_DEPENDS+=	gstreamer1-plugins>=${GST1_VERSION}${GST1_MINIMAL_VERSION}:multimedia/gstreamer1-plugins \
		v4l_compat>=1.0.20100321:multimedia/v4l_compat
RUN_DEPENDS+=	gstreamer1-plugins>=${GST1_VERSION}${GST1_MININAL_VERSION}:multimedia/gstreamer1-plugins

DIST=		bad
BAD_GST_DIRS=	gst-libs sys gst po pkgconfig
# "extra" plugins enabled by default in Makefile.common
BAD_GST_DIRS+=  ext/bz2
NO_GSTREAMER_COMMON=	yes
PLIST=		${.CURDIR}/pkg-plist

do-build:
.for dir in ${BAD_GST_DIRS}
	@(cd ${BUILD_WRKSRC}/${dir}; ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_FLAGS} ${MAKEFILE} ${_MAKE_JOBS} ${MAKE_ARGS} ${ALL_TARGET})
.endfor

do-install:
.for dir in ${BAD_GST_DIRS}
	@(cd ${INSTALL_WRKSRC}/${dir} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} ${INSTALL_TARGET})
.endfor

.include "${MASTERDIR}/Makefile"
