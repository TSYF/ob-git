# $FreeBSD: head/multimedia/obs-qtwebkit/Makefile 531597 2020-04-13 12:12:19Z pkubaj $

PORTNAME=	obs-qtwebkit
PORTVERSION=	g2018090201
PORTREVISION=	2
CATEGORIES=	multimedia

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Browser source plugin for obs-studio

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libobs.so:multimedia/obs-studio \
		libinotify.so:devel/libinotify

USES=		gmake pkgconfig qt:5
USE_QT=		core gui network webkit widgets

USE_GITHUB=	yes
GH_ACCOUNT=	swills
GH_TAGNAME=	c01aa76
MAKEFILE=	GNUmakefile
MAKE_ARGS=	OBS_INCLUDE=${LOCALBASE}/include OBS_LIB=${LOCALBASE}/lib

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc64
CFLAGS+=	-DNO_WARN_X86_INTRINSICS -maltivec -mvsx
USES+=		compiler:gcc-c++11-lib
.else
USES+=		compiler:c++11-lang
.endif

post-patch:
	@${REINPLACE_CMD} -e 's,%%LOCALBASE%%,${LOCALBASE},g' ${WRKSRC}/GNUmakefile

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/obs-plugins/
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/obs/obs-plugins/qtwebkit-browser/data/locale
	${INSTALL_PROGRAM} ${WRKSRC}/build/qtwebkit-browser.so ${STAGEDIR}${PREFIX}/lib/obs-plugins/
	${INSTALL_PROGRAM} ${WRKSRC}/build/renderer ${STAGEDIR}${PREFIX}/lib/obs-plugins/
	cd ${WRKSRC}/build/qtwebkit-browser/data/locale ; ${COPYTREE_SHARE} . \
		${STAGEDIR}${PREFIX}/share/obs/obs-plugins/qtwebkit-browser/data/locale

.include <bsd.port.mk>
