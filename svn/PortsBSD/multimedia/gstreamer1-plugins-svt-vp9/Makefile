# $FreeBSD: head/multimedia/gstreamer1-plugins-svt-vp9/Makefile 553720 2020-10-31 00:48:10Z jbeich $

PORTNAME=	svt-vp9
DISTVERSIONPREFIX=	v
DISTVERSION=	0.3.0
CATEGORIES=	multimedia
PKGNAMEPREFIX=	gstreamer1-plugins-

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	GStreamer (svt-vp9) plugin

LICENSE=	LGPL21+ # based on SPDX header
LICENSE_FILE=	${_LICENSE_STORE}/LGPL21

LIB_DEPENDS=	libSvtVp9Enc.so:multimedia/svt-vp9

USES=		gnome meson pkgconfig
USE_GITHUB=	yes
USE_GNOME=	glib20
USE_GSTREAMER1=	yes
GH_ACCOUNT=	OpenVisualCloud
GH_PROJECT=	SVT-VP9
WRKSRC_SUBDIR=	gstreamer-plugin
PLIST_FILES=	lib/gstreamer-1.0/libgstsvtvp9enc.so

post-patch:
	@${REINPLACE_CMD} '/-O2/d' ${WRKSRC}/meson.build

.include <bsd.port.mk>
