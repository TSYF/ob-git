# $FreeBSD: head/multimedia/vapoursynth-vmaf/Makefile 557247 2020-12-07 20:51:27Z jbeich $

PORTNAME=	vmaf
DISTVERSION=	r6
PORTREVISION=	3
CATEGORIES=	multimedia
PKGNAMEPREFIX=	vapoursynth-

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Video Multi-Method Assessment Fusion plugin for VapourSynth

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/include/vapoursynth/VSHelper.h:multimedia/vapoursynth
LIB_DEPENDS=	libvmaf.so:multimedia/vmaf

USES=		compiler:c++17-lang meson pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	HomeOfVapourSynthEvolution
GH_PROJECT=	VapourSynth-${PORTNAME:tu}
DATADIR=	${PREFIX}/lib/vapoursynth
DOCSDIR=	${PREFIX}/share/doc/${PKGBASE}
PORTDATA=	lib${PORTNAME}.so model
PORTDOCS=	*.md

OPTIONS_DEFINE=	DOCS

do-install-DOCS-on:
	(cd ${WRKSRC} && ${COPYTREE_SHARE} \
		"${PORTDOCS}" ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
